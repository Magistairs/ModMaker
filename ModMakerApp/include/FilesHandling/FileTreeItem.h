#pragma once
#include <ModelView/GenericTreeItem.h>
#include <QtIncludes.h>
#include <StdIncludes.h>

class ModContainer;

class FileTreeItem : public GenericTreeItem
{
public:
	FileTreeItem(const QFileInfo& fileInfo);
	virtual ~FileTreeItem();

	void                                                  AddOverridingFile(ModContainer* pContainer, const QString& filePath);
	const std::vector<std::pair<ModContainer*, QString>>& GetOverridingFiles() const;

	const QFileInfo& GetFileInfo() { return m_fileInfo; }

protected:
	QFileInfo                                      m_fileInfo;
	std::vector<std::pair<ModContainer*, QString>> m_overridingFiles;
	mutable std::shared_mutex                      m_overridingFilesMutex;
};
