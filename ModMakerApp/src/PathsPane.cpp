#include "PathsPane.h"

#include <GamesInterfaces/GameInterface.h>
#include <ModsContent/ModContainer.h>
#include <Widgets/DuoWidget.h>
#include <Widgets/FileSelectWidget.h>

PathsPane::PathsPane()
  : Pane("Paths Setup", PDXModdingAssistant::g_pMainWnd)
{
	QVBoxLayout*           pLayout     = new QVBoxLayout(centralWidget());
	CollapsibleCategories* pMainWidget = new CollapsibleCategories(this);
	pLayout->addWidget(pMainWidget);

	pMainWidget->AddCategory("Paths Setup", CreatePathsSection());

	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modsListModified, [this, pMainWidget] {
		pMainWidget->takeTopLevelItem(1);
		pMainWidget->AddCategory("Found Mods", CreateFoundModsSection());
	});
}

QWidget* PathsPane::CreatePathsSection()
{
	QWidget*     pPathsWidget = new QWidget(this);
	QVBoxLayout* pLayout      = new QVBoxLayout(pPathsWidget);

	DuoWidget* pDuo = new DuoWidget(pLayout);
	pDuo->GetLayout()->addWidget(new QLabel("Selected Game:"));

	QComboBox* pSelectedGameCombo = new QComboBox;
	pDuo->GetLayout()->addWidget(pSelectedGameCombo);

	for (const GameInterface* pGameInterface : PDXModdingAssistant::g_pMainWnd->GetGamesInterfaces())
	{
		pSelectedGameCombo->addItem(pGameInterface->GetName());
	}
	pSelectedGameCombo->setCurrentIndex(-1);
	pSelectedGameCombo->setPlaceholderText("<Select A Game>");

	if (PDXModdingAssistant::g_pMainWnd->GetSelectedGame())
		pSelectedGameCombo->setCurrentText(PDXModdingAssistant::g_pMainWnd->GetSelectedGame()->GetName());

	connect(pSelectedGameCombo, &QComboBox::currentIndexChanged, [this](int index) {
		// pSelectedGameCombo will be deleted by the call, so delay it
		QTimer::singleShot(0,
		  [this, index] { PDXModdingAssistant::g_pMainWnd->SetSelectedGame(PDXModdingAssistant::g_pMainWnd->GetGamesInterfaces()[index]); });
	});

	pLayout->addSpacing(10);
	CreatePathWidget(pLayout, PDXModdingAssistant::Game, "Game Executable Path:");
	pLayout->addSpacing(10);
	CreatePathWidget(pLayout, PDXModdingAssistant::Mods, "Mods Root Directory Path:");

	return pPathsWidget;
}

void PathsPane::CreatePathWidget(QBoxLayout* pLayout, PDXModdingAssistant::EPath type, const QString& label)
{
	pLayout->addWidget(new QLabel(label));

	FileSelectWidget* pFileWidget = new FileSelectWidget(pLayout, FileSelectWidget::Directory);
	pFileWidget->setEnabled(false);

	connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::gameSelected, [pFileWidget, type] {
		pFileWidget->SetFile(PDXModdingAssistant::g_pMainWnd->GetPath(type));
		pFileWidget->setEnabled(PDXModdingAssistant::g_pMainWnd->GetSelectedGame());
	});

	connect(pFileWidget, &FileSelectWidget::fileChanged, [pFileWidget, this, type](QString path) {
		if (path != PDXModdingAssistant::g_pMainWnd->GetPath(type))
		{
			QSignalBlocker blocker(pFileWidget);
			pFileWidget->SetFile("");
			PDXModdingAssistant::g_pMainWnd->TrySetPath(type, path);
		}
	});
	QMetaObject::Connection connection = connect(PDXModdingAssistant::g_pMainWnd,
	  &PDXModdingAssistant::pathChanged,
	  [pFileWidget, type](PDXModdingAssistant::EPath _type, const QString& value) {
		  if (_type == type)
		  {
			  QSignalBlocker blocker(pFileWidget);
			  pFileWidget->SetFile(value);
		  }
	  });
	connect(pFileWidget, &QObject::destroyed, [connection] { disconnect(connection); });
}

QWidget* PathsPane::CreateFoundModsSection()
{
	QWidget*     pWidget      = new QWidget(this);
	QVBoxLayout* pInnerLayout = new QVBoxLayout(pWidget);

	const std::vector<std::unique_ptr<ModContainer>>* allMods = PDXModdingAssistant::g_pMainWnd->GetAllMods();
	if (allMods)
	{
		for (const std::unique_ptr<ModContainer>& mod : *allMods)
		{
			if (mod.get() != PDXModdingAssistant::g_pMainWnd->GetBaseGameContainer())
			{
				QRadioButton* pButton = new QRadioButton(mod->GetName());
				pInnerLayout->addWidget(pButton);
				ModContainer* pMod = mod.get();
				connect(pButton, &QRadioButton::clicked, [pMod] { PDXModdingAssistant::g_pMainWnd->SetSelectedMod(pMod); });
				connect(PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modSelected, [pButton, pMod] {
					pButton->setChecked(PDXModdingAssistant::g_pMainWnd->GetSelectedMod() == pMod);
				});
			}
		}
	}
	return pWidget;
}
