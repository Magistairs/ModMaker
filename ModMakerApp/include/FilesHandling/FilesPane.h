#pragma once
#include <QtIncludes.h>
#include <Widgets/Pane.h>

class FileTreeItem;
class FilesTreeModel;

class FilesPane : public Pane
{
	Q_OBJECT

public:
	FilesPane(const QString& name);
	virtual ~FilesPane();

protected:
	void BuildTree();
	void OnIndexClicked(const QModelIndex& index) const;

	void          ReadHierarchyTask();
	FileTreeItem* ReadDirectory(const QFileInfo& dirInfo, const bool isRootDir);
	FileTreeItem* ReadFile(const QFileInfo& fileInfo);
	void          OnHierarchyRead();
	void          FindFilesInOtherModsTask();

	void AddChildrenItemsToList_R(FileTreeItem* pItem, std::vector<FileTreeItem*>& fileItems) const;

	virtual QString GetRootPath()                                              = 0;
	virtual void    FindFilesInOtherMods(std::vector<FileTreeItem*> fileItems) = 0;

signals:
	void hierarchyRead() const;

protected:
	// The model can also own the root to ensure it's always valid on the main thread while reassigned on another thread
	std::shared_ptr<FileTreeItem>   m_pRoot;
	std::unique_ptr<FilesTreeModel> m_pModel;
	QLabel*                         m_pHeadLabel = nullptr;
	QTreeView*                      m_pTree      = nullptr;

	std::atomic<bool> m_isBuildingTree{false};
};
