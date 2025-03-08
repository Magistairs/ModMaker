#pragma once
#include <ModsContent/ModdableObjectType.h>

class CountryObjectType : public ModdableObjectType
{
public:
	CountryObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
