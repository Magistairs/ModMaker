#include "ModsContent/EU4/DecisionObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

DecisionObjectType::DecisionObjectType()
  : ModdableObjectType("Decision", "/decisions", "txt")
{
}

void DecisionObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
