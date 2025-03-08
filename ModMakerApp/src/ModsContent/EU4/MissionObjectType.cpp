#include "ModsContent/EU4/MissionObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

MissionObjectType::MissionObjectType()
  : ModdableObjectType("Mission", "/missions", "txt")
{
}

void MissionObjectType::ParseFile(ModContainer* pMod, QFile& file) const
{
	ModObject* pNewObject = pMod->AddObject();
	pNewObject->SetFilePath(file.fileName());
	pNewObject->SetType(this);

	QTextStream in(&file);
	while (!in.atEnd())
	{
		pNewObject->def += in.readLine() + '\n';
	}
}
