#pragma once
#include "FilesPane.h"

class GameFilesPane : public FilesPane
{
	Q_OBJECT

public:
	GameFilesPane();
	virtual ~GameFilesPane();

protected:
	virtual QString GetRootPath() override;
	virtual void    FindFilesInOtherMods(std::vector<FileTreeItem*> fileItems) override;
};
