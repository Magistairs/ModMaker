#include "FilesHandling/FileTreeItem.h"

FileTreeItem::FileTreeItem(const QFileInfo& fileInfo)
  : GenericTreeItem()
  , m_fileInfo(fileInfo)
{
}

FileTreeItem::~FileTreeItem() {}

void FileTreeItem::AddOverridingFile(ModContainer* pContainer, const QString& filePath)
{
	std::unique_lock<std::shared_mutex> lock(m_overridingFilesMutex);
	for (const std::pair<ModContainer*, QString>& file : m_overridingFiles)
	{
		if (file.first != pContainer)
			continue;
		if (file.second == filePath)
			return;
	}
	m_overridingFiles.emplace_back(pContainer, filePath);
}

const std::vector<std::pair<ModContainer*, QString>>& FileTreeItem::GetOverridingFiles() const
{
	std::shared_lock<std::shared_mutex> lock(m_overridingFilesMutex);
	return m_overridingFiles;
}
