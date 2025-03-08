#include "ModsContent/EU4/AgeObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

AgeObjectType::AgeObjectType()
  : ModdableObjectType("Age", "/common/ages", "txt")
{
}

void AgeObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
