#include "ModsContent/ModContainer.h"

#include "ModsContent/ModObject.h"
#include "ModsContent/ModdableObjectType.h"

#include <GamesInterfaces/GameInterface.h>

ModContainer::ModContainer(const QString& name, const QString& path, GameInterface* pGame)
  : m_name(name)
  , m_path(path)
  , m_pGame(pGame)
{
}

void ModContainer::Load()
{
	// m_loadProgressID = PDXModdingAssistant::g_pMainWnd->StartNewProgress(QString("Loading %1").arg(GetName()));
	BeginFileLoad(); // The root directory is considered a "file to load" so we can know all sub directories have been parsed
	QFileInfo fileInfo(m_path);
	ParseDirectory(fileInfo, true);
	EndFileLoad();
}

void ModContainer::BeginFileLoad()
{
	std::lock_guard<std::mutex> lock(m_loadMutex);
	++m_filesToLoad;
	++m_totalFiles;
	// PDXModdingAssistant::g_pMainWnd->setMaximumProgress(m_loadProgressID, m_totalFiles);
}

void ModContainer::EndFileLoad()
{
	std::lock_guard<std::mutex> lock(m_loadMutex);
	if (--m_filesToLoad == 0)
	{
		m_isLoaded = true;
		m_loadedCondition.notify_all();
	}
	// PDXModdingAssistant::g_pMainWnd->setCurrentProgress(m_loadProgressID, m_totalFiles - m_filesToLoad);
}

const std::vector<std::unique_ptr<ModObject>>& ModContainer::GetAllObjects()
{
	std::unique_lock<std::mutex> lock(m_loadMutex);
	m_loadedCondition.wait(lock, [this] { return m_isLoaded; });
	return m_objects;
}

ModObject* ModContainer::AddObject()
{
	std::lock_guard<std::mutex> lock(m_objectsMutex);
	m_objects.push_back(std::make_unique<ModObject>(this));
	ModObject* pNewObject = m_objects.back().get();
	return pNewObject;
}

void ModContainer::ParseDirectory(const QFileInfo& dirInfo, const bool isRootDir)
{
	const QString& path = dirInfo.absoluteFilePath(); // QDir("") returns current directory and we don't want that
	if (path.isEmpty())
		return;

	if (!isRootDir && !m_pGame->IsModdableObjectParentDirectory(dirInfo))
		return;

	QFileInfoList entryInfoList = QDir(path).entryInfoList(QDir::Files | QDir::Dirs | QDir::NoDotAndDotDot);
	for (QFileInfo& fileInfo : entryInfoList)
	{
		if (fileInfo.isFile())
		{
			ParseFile(fileInfo);
		}
		else if (fileInfo.isDir())
		{
			ParseDirectory(fileInfo, false);
		}
	}
}

void ModContainer::ParseFile(const QFileInfo& fileInfo)
{
	ModdableObjectType* pType = nullptr;
	if (!m_pGame->IsModdableObjectFile(fileInfo, pType))
		return;

	BeginFileLoad();
	PDXModdingAssistant::g_pMainWnd->Task([fileInfo, pType, this] {
		pType->ParseFileTask(this, fileInfo.absoluteFilePath());
		EndFileLoad();
	});
}