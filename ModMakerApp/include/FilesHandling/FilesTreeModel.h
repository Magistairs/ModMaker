#pragma once
#include "FileTreeItem.h"
#include "ModelView/GenericTreeModel.h"

class FilesTreeModel : public GenericTreeModel
{
public:
	FilesTreeModel(QObject* pParent);
	virtual ~FilesTreeModel();

	virtual QVariant data(const QModelIndex& index, int role = Qt::DisplayRole) const override;

	static FileTreeItem* GetData(const QModelIndex& index);
};
