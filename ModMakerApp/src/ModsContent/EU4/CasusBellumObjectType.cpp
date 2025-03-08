#include "ModsContent/EU4/CasusBellumObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

CasusBellumObjectType::CasusBellumObjectType()
  : ModdableObjectType("Casus Bellum", "/common/cb_types", "txt")
{
}

void CasusBellumObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
