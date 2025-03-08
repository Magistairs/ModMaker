#pragma once
#include <ModsContent/ModdableObjectType.h>

class AgeObjectType : public ModdableObjectType
{
public:
	AgeObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
