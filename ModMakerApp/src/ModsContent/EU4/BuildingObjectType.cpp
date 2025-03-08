#include "ModsContent/EU4/BuildingObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

BuildingObjectType::BuildingObjectType()
  : ModdableObjectType("Building", "/common/buildings", "txt")
{
}

void BuildingObjectType::ParseFile(ModContainer* pMod, QFile& file) const
{
	ModObject* pNewContent = pMod->AddObject();
	pNewContent->SetFilePath(file.fileName());
	pNewContent->SetType(this);

	QTextStream in(&file);
	while (!in.atEnd())
	{
		pNewContent->def += in.readLine();
	}
}
