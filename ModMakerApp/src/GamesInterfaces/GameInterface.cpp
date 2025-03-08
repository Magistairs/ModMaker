#include "GamesInterfaces/GameInterface.h"

#include <FilesHandling/FileEditPane.h>
#include <FilesHandling/GameFilesPane.h>
#include <FilesHandling/ModFilesPane.h>

#include <ModsContent/ModContainer.h>
#include <ModsContent/ModdableObjectType.h>

#include <ModsListPane.h>
#include <PDXModdingAssistant.h>
#include <PathsPane.h>

GameInterface::GameInterface()
  : QObject(PDXModdingAssistant::g_pMainWnd)
{
	m_paths.resize(PDXModdingAssistant::Count);
	connect(this, &GameInterface::pathChanged, PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::pathChanged);
	connect(this, &GameInterface::modSelected, PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modSelected);
	connect(this, &GameInterface::modsListModified, PDXModdingAssistant::g_pMainWnd, &PDXModdingAssistant::modsListModified);
}

GameInterface::~GameInterface()
{
	GameDirectory = m_paths[PDXModdingAssistant::Game];
	ModsDirectory = m_paths[PDXModdingAssistant::Mods];

	QJsonArray jsonArray;
	for (int i = PDXModdingAssistant::Count; i < m_paths.size(); ++i)
	{
		jsonArray.append(m_paths[i]);
	}
	AdditionalDirectories = jsonArray;
}

void GameInterface::Initialize()
{
	if (m_isInitialized)
		return;

	m_isInitialized = true;

	m_config.SetName(GetName());
	m_config.Load();

	m_pLayout = new PanesLayout((GetName() + "_layout").toLocal8Bit().data(), this);

	QJsonValue& asValue = AdditionalDirectories;
	QJsonArray  asArray = asValue.toArray();
	for (int i = 0; i < asArray.size(); ++i)
	{
		AddPath(asArray[i].toString());
	}

	// Try to find in default locations
	QString modsPath = ModsDirectory;
	if (modsPath.isEmpty())
	{
		// Try to find the Mods folder in the default location
		QDir modsDir = QStandardPaths::writableLocation(QStandardPaths::DocumentsLocation);
		modsDir      = modsDir.filePath("Paradox Interactive");
		modsDir      = modsDir.filePath(GetName());
		modsDir      = modsDir.filePath("mod");
		modsPath     = modsDir.path();
	}
	TrySetPath(PDXModdingAssistant::Mods, modsPath);

	QString gamePath = GameDirectory;
	if (gamePath.isEmpty())
	{
		// Try to find the game folder in the default location
		gamePath = "C:/Program Files (x86)/Steam/steamapps/common/" + GetName();
	}
	TrySetPath(PDXModdingAssistant::Game, gamePath);

	QString selectedModName = SelectedMod;
	if (!selectedModName.isEmpty())
	{
		PDXModdingAssistant::g_pMainWnd->Task([this, selectedModName] { TrySetSelectedModTask(selectedModName); });
	}
}

void GameInterface::CreatePanes() const
{
	m_pLayout->AddPane(new PathsPane());
	m_pLayout->AddPane(new GameFilesPane());
	m_pLayout->AddPane(new ModFilesPane());
	m_pLayout->AddPane(new ModsListPane());
	m_pLayout->AddPane(new FileEditPane());
	m_pLayout->CreateDefaultLayout();
	m_pLayout->ApplyLayout();
}

const GameInterface::ModContainerList& GameInterface::GetAllMods() const
{
	std::unique_lock<std::mutex> lock(m_modsFilledMutex);
	m_modsFilledCondition.wait(lock, [this] { return m_modsFilled; });
	return m_mods;
}

void GameInterface::TrySetSelectedModTask(const QString& modName)
{
	const GameInterface::ModContainerList& mods = GetAllMods();
	for (const std::unique_ptr<ModContainer>& mod : mods)
	{
		if (mod->GetName() == modName)
		{
			SetSelectedMod(mod.get());
			return;
		}
	}
}

void GameInterface::SetSelectedMod(ModContainer* pMod)
{
	m_pSelectedMod = pMod;
	if (m_pSelectedMod)
		SelectedMod = m_pSelectedMod->GetName();
	else
		SelectedMod = QString();

	Q_EMIT modSelected();
}

const QString& GameInterface::GetPath(PDXModdingAssistant::EPath type) const
{
	return m_paths[type];
}

void GameInterface::TrySetPath(PDXModdingAssistant::EPath type, const QString& dirPath)
{
	if (dirPath.isEmpty())
	{
		if (type == PDXModdingAssistant::EPath::Game)
			SetGamePath(dirPath);
		else
			SetModsPath(dirPath);
		return;
	}
	QDir dir(dirPath);
	if (dir.exists())
	{
		SetPathIfValid(type, dirPath);
	}
	else
	{
		PDXModdingAssistant::Log(QString("Path '") + dir.path() + "' does not exist", OutputLog::Warning);
	}
}

bool GameInterface::IsModdableObjectParentDirectory(const QFileInfo& fileInfo) const
{
	if (!fileInfo.isDir())
		return false;

	QString dirPath = fileInfo.absoluteFilePath() + '/';
	for (const std::unique_ptr<ModdableObjectType>& moddableObject : m_moddableObjectsTypes)
	{
		if (fileInfo.absoluteFilePath().contains(moddableObject->GetRelativePath()))
			return true;

		// Check for incomplete path, meaning one of the sub directories could match
		const QString path              = moddableObject->GetRelativePath();
		QStringList   directoriesInPath = path.split('/', Qt::SkipEmptyParts);
		for (qsizetype i = 0; i < directoriesInPath.size(); ++i)
		{
			QString path;
			for (qsizetype j = 0; j <= i; ++j)
			{
				path += directoriesInPath[i] + '/';
			}
			if (dirPath.endsWith(path))
				return true;
		}
	}
	return false;
}

bool GameInterface::IsModdableObjectFile(const QFileInfo& fileInfo, ModdableObjectType*& pType)
{
	if (!fileInfo.isFile())
		return false;

	for (std::unique_ptr<ModdableObjectType>& moddableObject : m_moddableObjectsTypes)
	{
		if (fileInfo.absoluteFilePath().contains(moddableObject->GetRelativePath()))
		{
			if (fileInfo.suffix() == moddableObject->GetFileSuffix())
			{
				pType = moddableObject.get();
				return true;
			}
		}
	}
	return false;
}

void GameInterface::SetPathIfValid(PDXModdingAssistant::EPath type, const QString& dirPath)
{
	bool isValid = false;
	if (type == PDXModdingAssistant::Mods)
	{
		QDir          dir(dirPath);
		QFileInfoList folderContent = dir.entryInfoList();
		for (QFileInfo& fileInfo : folderContent)
		{
			if (fileInfo.isFile() && fileInfo.suffix() == "mod")
			{
				isValid = true;
				break;
			}
		}
	}
	else if (type == PDXModdingAssistant::Game)
	{
		isValid = QFile(dirPath + GameExePathFromGameFolder).exists();
	}
	if (isValid)
	{
		if (type == PDXModdingAssistant::EPath::Game)
			SetGamePath(dirPath);
		else
			SetModsPath(dirPath);
	}
	else
		PDXModdingAssistant::g_pMainWnd->Log(dirPath + " is not a valid " + QVariant::fromValue(type).toString() + " path.", OutputLog::Warning);
}

void GameInterface::SetGamePath(const QString& path)
{
	m_paths[PDXModdingAssistant::Game] = path;
	m_pGameContainer                   = std::make_unique<ModContainer>("Game", m_paths[PDXModdingAssistant::Game], this);
	PDXModdingAssistant::g_pMainWnd->Task(std::bind(&ModContainer::Load, m_pGameContainer.get()));

	QString msg = GetName() + " : Game path set to '" + path + "'.";
	PDXModdingAssistant::g_pMainWnd->Log(msg, OutputLog::Info);
	Q_EMIT pathChanged(PDXModdingAssistant::Game, path);
}

void GameInterface::SetModsPath(const QString& path)
{
	InvalidateModsList();
	m_mods.erase(m_mods.begin(), m_mods.end());

	m_paths[PDXModdingAssistant::Mods] = path;

	if (!m_paths[PDXModdingAssistant::Mods].isEmpty()) // QDir from empty string returns current directory, we don't want that
	{
		QDir          dir(path);
		QFileInfoList files = dir.entryInfoList();

		for (const QFileInfo& fileInfo : files)
		{
			if (fileInfo.suffix() == "mod")
			{
				QFile file(fileInfo.absoluteFilePath());
				if (!file.open(QIODevice::ReadOnly))
				{
					PDXModdingAssistant::g_pMainWnd->Log(file.fileName() + " : " + file.errorString(), OutputLog::Error);
				}
				else
				{
					QString     name;
					QString     path;
					QTextStream in(&file);
					while (!in.atEnd())
					{
						QString line = in.readLine().simplified();
						if (line.startsWith("name"))
						{
							name = line.right(line.size() - line.indexOf('=') - 1);
							name.remove('"');
						}
						else if (line.startsWith("path"))
						{
							path = line.right(line.size() - line.indexOf('=') - 1);
							path.remove('"');
						}
					}
					m_mods.push_back(std::make_unique<ModContainer>(name, path, this));
					ModContainer* pAddedMod = m_mods.back().get();
					pAddedMod->SetDescriptorPath(fileInfo.absoluteFilePath());
					PDXModdingAssistant::g_pMainWnd->Task(std::bind(&ModContainer::Load, pAddedMod));
				}
			}
		}
	}
	ModsListFilled();
	Q_EMIT modsListModified();

	QString msg = GetName() + " : Mods path set to '" + path + "'.";
	PDXModdingAssistant::g_pMainWnd->Log(msg, OutputLog::Info);
	Q_EMIT pathChanged(PDXModdingAssistant::Mods, path);
}

void GameInterface::AddPath(const QString& path)
{
	m_paths.push_back(path);
	QString msg = "Additional mod path '" + path + "' added.";
	PDXModdingAssistant::g_pMainWnd->Log(msg, OutputLog::Info);
}

void GameInterface::InvalidateModsList()
{
	std::unique_lock<std::mutex> lock(m_modsFilledMutex);
	m_modsFilled = false;
}

void GameInterface::ModsListFilled()
{
	std::lock_guard<std::mutex> lock(m_modsFilledMutex);
	m_modsFilled = true;
	m_modsFilledCondition.notify_all();
}
