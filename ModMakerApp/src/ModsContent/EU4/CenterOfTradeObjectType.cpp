#include "ModsContent/EU4/CenterOfTradeObjectType.h"

#include <ModsContent/ModContainer.h>
#include <PDXModdingAssistant.h>

CenterOfTradeObjectType::CenterOfTradeObjectType()
  : ModdableObjectType("Center of Trade", "/common/centers_of_trade", "txt")
{
}

void CenterOfTradeObjectType::ParseFile(ModContainer* pMod, QFile& file) const
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
