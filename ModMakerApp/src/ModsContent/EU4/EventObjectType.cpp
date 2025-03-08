#include "ModsContent/EU4/EventObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

EventObjectType::EventObjectType()
  : ModdableObjectType("Event", "/events", "txt")
{
}

void EventObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
