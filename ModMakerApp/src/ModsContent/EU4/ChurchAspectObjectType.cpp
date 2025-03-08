#include "ModsContent/EU4/ChurchAspectObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

ChurchAspectObjectType::ChurchAspectObjectType()
  : ModdableObjectType("Church Aspect", "/common/countries", "txt")
{
}

void ChurchAspectObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
