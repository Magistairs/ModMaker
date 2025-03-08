#pragma once
#include <ModsContent/ModdableObjectType.h>

class CenterOfTradeObjectType : public ModdableObjectType
{
public:
	CenterOfTradeObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
