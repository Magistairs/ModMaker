#pragma once
#include <ModsContent/ModdableObjectType.h>

class ChurchAspectObjectType : public ModdableObjectType
{
public:
	ChurchAspectObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
