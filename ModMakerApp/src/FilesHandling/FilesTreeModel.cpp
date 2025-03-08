#include "FilesHandling/FilesTreeModel.h"

#include <ModsContent/ModContainer.h>

FilesTreeModel::FilesTreeModel(QObject* pParent)
  : GenericTreeModel(pParent)
{
}

FilesTreeModel::~FilesTreeModel() {}

QVariant FilesTreeModel::data(const QModelIndex& index, int role) const
{
	if (m_pRoot && index.isValid())
	{
		FileTreeItem* pItem = GetData(index);
		if (role == Qt::DisplayRole)
		{
			return pItem->GetFileInfo().fileName();
		}
		if (role == Qt::BackgroundRole)
		{
			if (pItem->GetOverridingFiles().size() > 1)
				return QColor(255, 255, 150, 100); // light yellow
			else if (pItem->GetOverridingFiles().size() == 1)
				return QColor(50, 255, 150, 100); // light green
		}
		if (role == Qt::ToolTipRole)
		{
			QStringList overridingFiles;
			for (const std::pair<ModContainer*, QString>& overridingFile : pItem->GetOverridingFiles())
			{
				overridingFiles.push_back(overridingFile.first->GetName());
			}
			return overridingFiles.join('\n');
		}
	}
	return QVariant();
}

FileTreeItem* FilesTreeModel::GetData(const QModelIndex& index)
{
	return static_cast<FileTreeItem*>(GenericTreeModel::GetData(index));
}
