#pragma once
#include <ConfigValue.h>
#include <PDXModdingAssistant.h>
#include <QtIncludes.h>
#include <UI/PanesLayout.h>

class ModdableObjectType;

class GameInterface : public QObject
{
	Q_OBJECT

public:
	using ModContainerList = std::vector<std::unique_ptr<ModContainer>>;

	GameInterface();
	virtual ~GameInterface();

	virtual void              Initialize();
	virtual void              CreatePanes() const;
	const std::vector<Pane*>& GetPanes() const
	{
		return m_pLayout->GetPanes();
		;
	}

	virtual QString GetName() const = 0;

	const std::unique_ptr<ModContainer>& GetBaseGameContainer() const { return m_pGameContainer; }
	const ModContainerList&              GetAllMods() const;
	ModContainer*                        GetSelectedMod() const { return m_pSelectedMod; }
	void                                 TrySetSelectedModTask(const QString& modName);
	void                                 SetSelectedMod(ModContainer* pMod);

	const QString& GetPath(PDXModdingAssistant::EPath type) const;
	void           TrySetPath(PDXModdingAssistant::EPath type, const QString& dirPath);

	bool IsModdableObjectParentDirectory(const QFileInfo& fileInfo) const;
	bool IsModdableObjectFile(const QFileInfo& fileInfo, ModdableObjectType*& pType);

protected:
	virtual void SetPathIfValid(PDXModdingAssistant::EPath type, const QString& dirPath);
	void         SetGamePath(const QString& dirPath);
	void         SetModsPath(const QString& dirPath);
	void         AddPath(const QString& path);
	void         InvalidateModsList();
	void         ModsListFilled();

signals:
	void pathChanged(PDXModdingAssistant::EPath dir, const QString& path) const;
	void modSelected() const;
	void modsListModified() const;

protected:
	ConfigFile                                       m_config;
	PanesLayout*                                     m_pLayout;
	std::vector<QString>                             m_paths;
	std::vector<std::unique_ptr<ModdableObjectType>> m_moddableObjectsTypes;

	std::unique_ptr<ModContainer>   m_pGameContainer;
	ModContainerList                m_mods;
	bool                            m_modsFilled = false;
	mutable std::mutex              m_modsFilledMutex;
	mutable std::condition_variable m_modsFilledCondition;

	ModContainer* m_pSelectedMod  = nullptr;
	bool          m_isInitialized = false;

public:
	DECLARE_CONFIG_VALUE(GameDirectory);
	DECLARE_CONFIG_VALUE(ModsDirectory);
	DECLARE_CONFIG_VALUE(AdditionalDirectories);
	DECLARE_CONFIG_VALUE(SelectedMod);
	DECLARE_CONFIG_VALUE(WikiUrl);
	DECLARE_CONFIG_VALUE(GameExePathFromGameFolder);
	DECLARE_CONFIG_VALUE(GameDebugModeArgs);
};
