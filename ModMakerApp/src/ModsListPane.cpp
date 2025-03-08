#include "ModsListPane.h"

#include <GamesInterfaces/GameInterface.h>
#include <ModsContent/ModContainer.h>

ModsListPane::ModsListPane()
  : Pane("Mods List", PDXModdingAssistant::g_pMainWnd)
{
	new QVBoxLayout(centralWidget());
	hide();

	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modsListModified, [this] {
		while (layout()->count())
		{
			QLayoutItem* pItem = layout()->takeAt(0);
			delete pItem;
		}
		CreateModsList();
	});
}

void ModsListPane::CreateModsList()
{
	show();
	const std::vector<std::unique_ptr<ModContainer>>* allMods = PDXModdingAssistant::g_pMainWnd->GetAllMods();
	if (allMods)
	{
		for (const std::unique_ptr<ModContainer>& mod : *allMods)
		{
			if (mod.get() != PDXModdingAssistant::g_pMainWnd->GetBaseGameContainer())
			{
				QRadioButton* pButton = new QRadioButton(mod->GetName());
				layout()->addWidget(pButton);
				ModContainer* pMod = mod.get();
				connect(pButton, &QRadioButton::clicked, [pMod] { PDXModdingAssistant::g_pMainWnd->SetSelectedMod(pMod); });
				connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modSelected, [pButton, pMod] {
					pButton->setChecked(PDXModdingAssistant::g_pMainWnd->GetSelectedMod() == pMod);
				});
			}
		}
	}
}
