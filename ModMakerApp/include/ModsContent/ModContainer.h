#pragma once
#include <QtIncludes.h>
#include <StdIncludes.h>

#include "ModObject.h"

class GameInterface;

class ModContainer
{
public:
	ModContainer(const QString& name, const QString& path, GameInterface* pGame);
	virtual ~ModContainer() {}

	void Load();

	void BeginFileLoad();
	void EndFileLoad();

	const QString& GetName() const { return m_name; }
	const QString& GetPath() const { return m_path; }
	const QString& GetDescriptorPath() const { return m_descriptorPath; }
	void           SetDescriptorPath(const QString& path) { m_descriptorPath = path; }

	const std::vector<std::unique_ptr<ModObject>>& GetAllObjects();
	ModObject*                                     AddObject();

protected:
	void ParseDirectory(const QFileInfo& dirInfo, const bool isRootDir);
	void ParseFile(const QFileInfo& fileInfo);

private:
	GameInterface*                          m_pGame;
	QString                                 m_name;
	QString                                 m_path;
	QString                                 m_descriptorPath;
	std::vector<std::unique_ptr<ModObject>> m_objects;
	std::mutex                              m_objectsMutex;

	int                     m_totalFiles  = 0;
	int                     m_filesToLoad = 0;
	bool                    m_isLoaded    = false;
	std::mutex              m_loadMutex;
	std::condition_variable m_loadedCondition;
};
