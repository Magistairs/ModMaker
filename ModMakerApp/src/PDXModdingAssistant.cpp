#include "PDXModdingAssistant.h"

#include <GamesInterfaces/GameInterface.h>
#include <Widgets/OutputLog.h>
#include <Widgets/Pane.h>

#include <GamesInterfaces/CK3Interface.h>
#include <GamesInterfaces/EU4Interface.h>
#include <GamesInterfaces/HOI4Interface.h>
#include <GamesInterfaces/StellarisInterface.h>
#include <GamesInterfaces/Victoria3Interface.h>

PDXModdingAssistant* PDXModdingAssistant::g_pMainWnd;

PDXModdingAssistant::PDXModdingAssistant(QWidget* pParent)
  : QMainWindow(pParent)
{
	QCoreApplication::setOrganizationName("Magistairs");
	QCoreApplication::setApplicationName("PDX Modding Assistant");

	g_pMainWnd = this;

	Initialize();
}

PDXModdingAssistant::~PDXModdingAssistant()
{
	QSettings settings;
	settings.setValue("geometry", saveGeometry());
	settings.setValue("windowState", saveState());

	m_taskManager.EndAllTasks();
	g_pMainWnd = nullptr;
}

void PDXModdingAssistant::Log(QString str, OutputLog::ELogLevel level)
{
	if (level == OutputLog::Debug)
		qDebug() << str;
	else if (level == OutputLog::Warning)
		qWarning() << str;
	else if (level == OutputLog::Error)
		qCritical() << str;
	else
		qInfo() << str;

	if (PDXModdingAssistant::g_pMainWnd && level != OutputLog::Debug)
		Q_EMIT PDXModdingAssistant::g_pMainWnd->log(str, level);
}

void PDXModdingAssistant::LaunchGame() const
{
	QString gamePath = m_pSelectedGame->GetPath(Game);
	if (!gamePath.isEmpty())
	{
		QString exePath = gamePath + m_pSelectedGame->GameExePathFromGameFolder + m_pSelectedGame->GameDebugModeArgs;
		Log("Launching " + exePath, OutputLog::Info);
		QProcess::startDetached(exePath);
	}
	else
	{
		Log("Game path not set", OutputLog::Warning);
	}
}

void PDXModdingAssistant::OpenWiki() const
{
	QJsonValue& asValue = m_pSelectedGame->WikiUrl;
	Log(QString("Opening ") + asValue.toString(), OutputLog::Info);
	QDesktopServices::openUrl(QUrl(asValue.toString()));
}

QString PDXModdingAssistant::GetPath(EPath type) const
{
	if (m_pSelectedGame)
		return m_pSelectedGame->GetPath(type);
	return QString();
}

void PDXModdingAssistant::TrySetPath(EPath type, const QString& dirPath)
{
	m_pSelectedGame->TrySetPath(type, dirPath);
}

void PDXModdingAssistant::SetSelectedGame(GameInterface* pGame)
{
	if (pGame != m_pSelectedGame)
	{
		m_pSelectedGame = pGame;
		SelectedGame    = m_pSelectedGame->GetName();
		Q_EMIT gameSelected();
	}
}

const std::vector<std::unique_ptr<ModContainer>>* PDXModdingAssistant::GetAllMods() const
{
	if (m_pSelectedGame)
		return &m_pSelectedGame->GetAllMods();
	return nullptr;
}

ModContainer* PDXModdingAssistant::GetSelectedMod() const
{
	if (m_pSelectedGame)
		return m_pSelectedGame->GetSelectedMod();
	return nullptr;
}

void PDXModdingAssistant::SetSelectedMod(ModContainer* pMod)
{
	if (m_pSelectedGame)
		m_pSelectedGame->SetSelectedMod(pMod);
}

ModContainer* PDXModdingAssistant::GetBaseGameContainer() const
{
	if (m_pSelectedGame)
		return m_pSelectedGame->GetBaseGameContainer().get();
	return nullptr;
}

void PDXModdingAssistant::Initialize()
{
	CreateOutputLog(); // Created before doing anything else for error reporting

	m_config.SetName("General");
	m_config.Load();

	// Create games interfaces
	// m_gameInterfaces.push_back(std::make_unique<CK3Interface>());
	m_gameInterfaces.push_back(new EU4Interface());
	// m_gameInterfaces.push_back(std::make_unique<HOI4Interface>());
	// m_gameInterfaces.push_back(std::make_unique<StellarisInterface>());
	// m_gameInterfaces.push_back(std::make_unique<Victoria3Interface>());
	for (GameInterface* pGameInterface : m_gameInterfaces)
	{
		pGameInterface->Initialize();
	}

	CreateUI();

	QString selectedGameName = static_cast<QJsonValue>(SelectedGame).toString();
	if (!selectedGameName.isEmpty())
	{
		for (GameInterface* pGameInterface : m_gameInterfaces)
		{
			if (selectedGameName == pGameInterface->GetName())
			{
				SetSelectedGame(pGameInterface);
				break;
			}
		}
	}
}

void PDXModdingAssistant::CreateUI()
{
	showMaximized();
	QSettings settings;
	restoreGeometry(settings.value("geometry").toByteArray());
	restoreState(settings.value("windowState").toByteArray());

	CreatePanes();
	CreateMenus();
}

void PDXModdingAssistant::CreatePanes()
{
	for (GameInterface* pGameInterface : m_gameInterfaces)
	{
		pGameInterface->CreatePanes();
	}
	QList<Pane*> panes = findChildren<Pane*>();
	for (Pane* pPane : panes)
	{
		pPane->installEventFilter(this);
	}
}

void PDXModdingAssistant::CreateMenus()
{
	CreatePanesMenu();

	// Launch game menu action
	QAction* pLaunchGame = new QAction("Launch Game", menuBar());
	menuBar()->addAction(pLaunchGame);
	pLaunchGame->setVisible(false);
	connect(pLaunchGame, &QAction::triggered, this, &PDXModdingAssistant::LaunchGame);

	// Open wiki menu action
	QAction* pOpenWiki = new QAction("Open Wiki", menuBar());
	menuBar()->addAction(pOpenWiki);
	pOpenWiki->setVisible(false);
	connect(pOpenWiki, &QAction::triggered, this, &PDXModdingAssistant::OpenWiki);

	connect(this, &PDXModdingAssistant::gameSelected, [this, pLaunchGame, pOpenWiki] {
		pLaunchGame->setVisible(GetSelectedGame());
		pOpenWiki->setVisible(GetSelectedGame());
	});
}

void PDXModdingAssistant::CreatePanesMenu()
{
	QMenu* pPanesMenu = new QMenu("Panes", this);
	menuBar()->addMenu(pPanesMenu);

	QList<Pane*> panes = findChildren<Pane*>();
	for (Pane* pPane : panes)
	{
		QAction* pAction = new QAction(pPane->windowTitle(), pPanesMenu);
		pAction->setCheckable(true);
		pAction->setChecked(pPane->isVisible());
		QMetaObject::Connection connection =
		  connect(this, &PDXModdingAssistant::paneVisibilityChanged, [this, pAction, pPane](Pane* pChangedPane, bool visible) {
			  if (pPane == pChangedPane)
				  pAction->setChecked(visible);
		  });
		connect(pAction, &QObject::destroyed, [connection] { disconnect(connection); });

		connection = connect(pAction, &QAction::triggered, [this, pPane](bool toggled) {
			if (toggled)
				pPane->show();
			else
				pPane->hide();
		});

		pPanesMenu->addAction(pAction);
	}
}

void PDXModdingAssistant::CreateOutputLog()
{
	QDockWidget* pOutputLogPane = new QDockWidget("Output");
	m_pOutputLog                = new OutputLog(this);
	pOutputLogPane->setWidget(m_pOutputLog);
	addDockWidget(Qt::DockWidgetArea::BottomDockWidgetArea, pOutputLogPane);
}

bool PDXModdingAssistant::eventFilter(QObject* watched, QEvent* event)
{
	if (event->type() == QEvent::Close && !m_isClosing)
	{
		QList<Pane*> panes = findChildren<Pane*>();
		for (Pane* pPane : panes)
		{
			if (watched == pPane)
			{
				pPane->hide();
				Q_EMIT paneVisibilityChanged(pPane, false);
				return true;
			}
		}
	}
	return QMainWindow::eventFilter(watched, event);
}

void PDXModdingAssistant::closeEvent(QCloseEvent* event)
{
	m_isClosing        = true;
	QList<Pane*> panes = findChildren<Pane*>();
	for (Pane* pPane : panes)
	{
		pPane->close();
	}
	QMainWindow::closeEvent(event);
}
