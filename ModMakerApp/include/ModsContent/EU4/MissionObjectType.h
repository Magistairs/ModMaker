#pragma once
#include <ModsContent/ModdableObjectType.h>

class MissionObjectType : public ModdableObjectType
{
public:
	MissionObjectType();

	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
