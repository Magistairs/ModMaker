#pragma once
#include <ModsContent/ModdableObjectType.h>

class InterfaceObjectType : public ModdableObjectType
{
public:
	InterfaceObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
