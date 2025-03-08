#include "ModsContent/ModdableObjectType.h"

#include <PDXModdingAssistant.h>

ModdableObjectType::ModdableObjectType(const char* name, const char* relativePath, const char* fileSuffix)
  : m_name(name)
  , m_relativePath(relativePath)
  , m_fileSuffix(fileSuffix)
{
}

void ModdableObjectType::ParseFileTask(ModContainer* pMod, const QString& filePath) const
{
	QFile file(filePath);
	if (!file.open(QIODevice::ReadOnly))
	{
		PDXModdingAssistant::g_pMainWnd->Log(file.fileName() + " : " + file.errorString(), OutputLog::Error);
	}
	else
	{
		// PDXModdingAssistant::g_pMainWnd->Log(QString("Parsing file '%1'").arg(filePath), OutputLog::Debug);
		ParseFile(pMod, file);
	}
}
