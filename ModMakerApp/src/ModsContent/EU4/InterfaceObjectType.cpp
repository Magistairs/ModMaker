#include "ModsContent/EU4/InterfaceObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

InterfaceObjectType::InterfaceObjectType()
  : ModdableObjectType("Interface", "/interface", "gui")
{
}

void InterfaceObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
