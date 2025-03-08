#pragma once
#include <ModsContent/ModdableObjectType.h>

class DecisionObjectType : public ModdableObjectType
{
public:
	DecisionObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
