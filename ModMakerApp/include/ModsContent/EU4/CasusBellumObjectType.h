#pragma once
#include <ModsContent/ModdableObjectType.h>

class CasusBellumObjectType : public ModdableObjectType
{
public:
	CasusBellumObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
