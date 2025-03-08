#include "FilesHandling/FilesPane.h"

#include "FilesHandling/FileTreeItem.h"
#include "FilesHandling/FilesTreeModel.h"

#include <GamesInterfaces/GameInterface.h>
#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

FilesPane::FilesPane(const QString& name)
  : Pane(name, PDXModdingAssistant::g_pMainWnd)
{
	QVBoxLayout* pLayout = new QVBoxLayout(centralWidget());

	m_pHeadLabel = new QLabel(this);
	pLayout->addWidget(m_pHeadLabel);

	m_pTree = new QTreeView(this);
	pLayout->addWidget(m_pTree);
	m_pTree->header()->hide();
	connect(m_pTree, &QTreeView::doubleClicked, this, &FilesPane::OnIndexClicked);

	m_pModel = std::make_unique<FilesTreeModel>(this);
	m_pTree->setModel(m_pModel.get());
	connect(this, &FilesPane::hierarchyRead, this, &FilesPane::OnHierarchyRead);
	hide();
}

FilesPane::~FilesPane() {}

void FilesPane::BuildTree()
{
	if (m_isBuildingTree)
		return;
	m_isBuildingTree = true;
	show();
	PDXModdingAssistant::g_pMainWnd->Task(std::bind(&FilesPane::ReadHierarchyTask, this));
}

void FilesPane::OnIndexClicked(const QModelIndex& index) const
{
	FileTreeItem*    pItem    = FilesTreeModel::GetData(index);
	const QFileInfo& fileInfo = pItem->GetFileInfo();
	if (fileInfo.isFile())
	{
		QString suffix = fileInfo.suffix();
		if (suffix == "txt" || suffix == "json")
			PDXModdingAssistant::g_pMainWnd->editFile(pItem->GetFileInfo().absoluteFilePath());
	}
}

void FilesPane::ReadHierarchyTask()
{
	FileTreeItem* pRoot    = nullptr;
	QString       rootPath = GetRootPath();
	if (!rootPath.isEmpty())
	{
		QFileInfo fileInfo(rootPath);
		pRoot = ReadDirectory(fileInfo, true);
	}

	m_pRoot.reset(pRoot);
	m_isBuildingTree = false;
	Q_EMIT hierarchyRead();
}

FileTreeItem* FilesPane::ReadDirectory(const QFileInfo& dirInfo, const bool isRootDir)
{
	const QString& path = dirInfo.absoluteFilePath(); // QDir("") returns current directory and we don't want that
	if (path.isEmpty())
		return nullptr;

	if (!isRootDir && !PDXModdingAssistant::g_pMainWnd->GetSelectedGame()->IsModdableObjectParentDirectory(dirInfo))
		return nullptr;

	FileTreeItem* pItem = new FileTreeItem(dirInfo);

	Log(QString("Reading directory %1").arg(path), OutputLog::Debug);

	QFileInfoList entryInfoList = QDir(path).entryInfoList(QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot);
	for (QFileInfo& fileInfo : entryInfoList)
	{
		if (fileInfo.isFile())
		{
			FileTreeItem* pChild = ReadFile(fileInfo);
			if (pChild)
				pItem->GetChildren().push_back(pChild);
		}
		else if (fileInfo.isDir())
		{
			FileTreeItem* pChild = ReadDirectory(fileInfo, false);
			if (pChild)
				pItem->GetChildren().push_back(pChild);
		}
	}
	return pItem;
}

FileTreeItem* FilesPane::ReadFile(const QFileInfo& fileInfo)
{
	ModdableObjectType* pType;
	if (!PDXModdingAssistant::g_pMainWnd->GetSelectedGame()->IsModdableObjectFile(fileInfo, pType))
		return nullptr;

	return new FileTreeItem(fileInfo);
}

void FilesPane::OnHierarchyRead()
{
	m_pModel->SetRoot(m_pRoot);
	if (m_pRoot)
		PDXModdingAssistant::g_pMainWnd->Task(std::bind(&FilesPane::FindFilesInOtherModsTask, this));
}

void FilesPane::FindFilesInOtherModsTask()
{
	std::vector<FileTreeItem*> fileItems;
	AddChildrenItemsToList_R(m_pRoot.get(), fileItems);
	FindFilesInOtherMods(fileItems);

	// File is "exclusive" if it exists only once, "override" if it exists only in 1 Mod, "conflicting" if it exists in several Mods
	int exclusiveFilesCount   = 0;
	int overrideFilesCount    = 0;
	int conflictingFilesCount = 0;
	for (FileTreeItem* pFileItem : fileItems)
	{
		const int count = pFileItem->GetOverridingFiles().size();
		if (count == 0)
			++exclusiveFilesCount;
		else if (count == 1)
			++overrideFilesCount;
		else
			++conflictingFilesCount;
	}

	QString headText = QString::number(fileItems.size()) + " files found\n";
	headText += QString::number(exclusiveFilesCount) + " exclusive files\n";
	headText += QString::number(overrideFilesCount) + " files overriden once\n";
	headText += QString::number(conflictingFilesCount) + " conflicting files (overridden several times)\n";

	m_pHeadLabel->setText(headText);
}

void FilesPane::AddChildrenItemsToList_R(FileTreeItem* pItem, std::vector<FileTreeItem*>& fileItems) const
{
	std::vector<GenericTreeItem*>& children = pItem->GetChildren();
	for (GenericTreeItem* pChild : children)
	{
		FileTreeItem* pFileItem = static_cast<FileTreeItem*>(pChild);
		fileItems.push_back(pFileItem);
		AddChildrenItemsToList_R(pFileItem, fileItems);
	}
}
