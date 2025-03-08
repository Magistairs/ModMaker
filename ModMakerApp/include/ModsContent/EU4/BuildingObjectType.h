#pragma once
#include <ModsContent/ModdableObjectType.h>

class BuildingObjectType : public ModdableObjectType
{
public:
	BuildingObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
