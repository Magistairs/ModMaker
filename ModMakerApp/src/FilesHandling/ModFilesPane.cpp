#include "FilesHandling/ModFilesPane.h"

#include "FilesHandling/FileTreeItem.h"
#include "FilesHandling/FilesTreeModel.h"

#include <GamesInterfaces/GameInterface.h>
#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

ModFilesPane::ModFilesPane()
  : FilesPane("Selected Mod Files")
{
	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modSelected, [this] { BuildTree(); });
}

ModFilesPane::~ModFilesPane() {}

QString ModFilesPane::GetRootPath()
{
	if (ModContainer* pMod = PDXModdingAssistant::g_pMainWnd->GetSelectedMod())
		return pMod->GetPath();
	return QString();
}

void ModFilesPane::FindFilesInOtherMods(std::vector<FileTreeItem*> fileItems)
{
	const std::vector<std::unique_ptr<ModContainer>>* pAllMods = PDXModdingAssistant::g_pMainWnd->GetAllMods();

	ModContainer* pThisContainer = PDXModdingAssistant::g_pMainWnd->GetSelectedMod();

	startNewProgress(QString("Comparing %1 files...").arg(pThisContainer->GetName()));
	setMaximumProgress(fileItems.size());
	int progress = 0;

	for (FileTreeItem* pFileItem : fileItems)
	{
		for (const std::unique_ptr<ModContainer>& mod : *pAllMods)
		{
			if (mod.get() != pThisContainer)
			{
				for (const std::unique_ptr<ModObject>& modObject : mod->GetAllObjects())
				{
					QString objectFileName = QFileInfo(modObject->GetFilePath()).fileName();

					if (objectFileName == pFileItem->GetFileInfo().fileName())
					{
						pFileItem->AddOverridingFile(mod.get(), modObject->GetFilePath());
					}
				}
			}
		}
		ModContainer* pGameContainer = PDXModdingAssistant::g_pMainWnd->GetBaseGameContainer();
		for (const std::unique_ptr<ModObject>& modObject : pGameContainer->GetAllObjects())
		{
			QString objectFileName = QFileInfo(modObject->GetFilePath()).fileName();

			if (objectFileName == pFileItem->GetFileInfo().fileName())
			{
				pFileItem->AddOverridingFile(pGameContainer, modObject->GetFilePath());
			}
		}
		pFileItem->EmitDataChanged();

		SetCurrentProgress(++progress);
	}
}
