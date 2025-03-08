#include "FilesHandling/GameFilesPane.h"

#include "FilesHandling/FileTreeItem.h"
#include "FilesHandling/FilesTreeModel.h"

#include <GamesInterfaces/GameInterface.h>
#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

GameFilesPane::GameFilesPane()
  : FilesPane("Game Files")
{
	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::pathChanged, [this](PDXModdingAssistant::EPath type) {
		if (type == PDXModdingAssistant::Game && PDXModdingAssistant::g_pMainWnd->GetSelectedGame())
			BuildTree();
	});
	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::gameSelected, [this] {
		if (!GetRootPath().isEmpty())
			BuildTree();
	});
}

GameFilesPane::~GameFilesPane() {}

QString GameFilesPane::GetRootPath()
{
	return PDXModdingAssistant::g_pMainWnd->GetPath(PDXModdingAssistant::Game);
}

void GameFilesPane::FindFilesInOtherMods(std::vector<FileTreeItem*> fileItems)
{
	const std::vector<std::unique_ptr<ModContainer>>* pAllMods = PDXModdingAssistant::g_pMainWnd->GetAllMods();

	startNewProgress("Comparing game files...");
	setMaximumProgress(fileItems.size());
	int progress = 0;

	for (FileTreeItem* pFileItem : fileItems)
	{
		for (const std::unique_ptr<ModContainer>& mod : *pAllMods)
		{
			const std::vector<std::unique_ptr<ModObject>>& modObjects = mod->GetAllObjects();
			for (const std::unique_ptr<ModObject>& modObject : modObjects)
			{
				QString objectFileName = QFileInfo(modObject->GetFilePath()).fileName();

				if (objectFileName == pFileItem->GetFileInfo().fileName())
				{
					pFileItem->AddOverridingFile(mod.get(), modObject->GetFilePath());
				}
			}
		}
		pFileItem->EmitDataChanged();

		SetCurrentProgress(++progress);
	}
}
