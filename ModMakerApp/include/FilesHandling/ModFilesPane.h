#pragma once
#include "FilesPane.h"

class ModFilesPane : public FilesPane
{
	Q_OBJECT

public:
	ModFilesPane();
	virtual ~ModFilesPane();

protected:
	virtual QString GetRootPath() override;
	virtual void    FindFilesInOtherMods(std::vector<FileTreeItem*> fileItems) override;
};
