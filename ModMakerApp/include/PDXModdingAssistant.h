#pragma once
#include <ConfigFile.h>
#include <ConfigValue.h>
#include <QtIncludes.h>
#include <TaskManager/TaskManager.h>
#include <Widgets/OutputLog.h>

class FileEditPane;
class GameInterface;
class ModContainer;
class Pane;

class PDXModdingAssistant : public QMainWindow
{
	Q_OBJECT

public:
	using GameInterfacesList = std::vector<GameInterface*>;
	using ModContainerList   = std::vector<std::unique_ptr<ModContainer>>;

	enum EPath
	{
		Game,
		Mods,
		Count
	};
	Q_ENUM(EPath)

	PDXModdingAssistant(QWidget* pParent = nullptr);
	virtual ~PDXModdingAssistant();

	template<typename Function>
	void Task(Function&& func)
	{
		m_taskManager.AddTask(func);
	}

	static void Log(QString, OutputLog::ELogLevel);

	void LaunchGame() const;
	void OpenWiki() const;

	bool                      IsClosing() const { return m_isClosing; }
	QString                   GetPath(EPath type) const;
	void                      TrySetPath(EPath type, const QString& dirPath);
	const GameInterfacesList& GetGamesInterfaces() const { return m_gameInterfaces; }
	GameInterface*            GetSelectedGame() const { return m_pSelectedGame; }
	void                      SetSelectedGame(GameInterface*);
	const ModContainerList*   GetAllMods() const;
	ModContainer*             GetSelectedMod() const;
	void                      SetSelectedMod(ModContainer*);
	ModContainer*             GetBaseGameContainer() const;

protected:
	void Initialize();
	void CreateUI();
	void CreatePanes();
	void CreateMenus();
	void CreatePanesMenu();
	void CreateOutputLog();

	virtual bool eventFilter(QObject* watched, QEvent* event) override;
	virtual void closeEvent(QCloseEvent* event) override;

signals:
	void editFile(const QString& filePath) const;
	void gameSelected() const;
	void log(QString, OutputLog::ELogLevel) const;
	void paneVisibilityChanged(Pane* pPane, bool visible) const;
	void pathChanged(EPath dir, const QString& path) const;
	void modSelected() const;
	void modsListModified() const;

	void startNewProgress(const int ID, const QString& displayText);
	void setMaximumProgress(const int ID, const int maximum);
	void setCurrentProgress(const int ID, const int current);

private:
	TaskManager m_taskManager;

	ConfigFile m_config;
	DECLARE_CONFIG_VALUE(SelectedGame);

	bool               m_isClosing = false;
	GameInterfacesList m_gameInterfaces;
	GameInterface*     m_pSelectedGame = nullptr;

	OutputLog* m_pOutputLog = nullptr;

public:
	static PDXModdingAssistant* g_pMainWnd;
};
