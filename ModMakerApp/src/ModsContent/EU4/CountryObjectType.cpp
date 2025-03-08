#include "ModsContent/EU4/CountryObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

CountryObjectType::CountryObjectType()
  : ModdableObjectType("Country", "/common/countries", "txt")
{
}

void CountryObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
