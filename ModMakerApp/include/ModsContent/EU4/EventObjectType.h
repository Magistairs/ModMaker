#pragma once
#include <ModsContent/ModdableObjectType.h>

class EventObjectType : public ModdableObjectType
{
public:
	EventObjectType();

protected:
	virtual void ParseFile(ModContainer* pMod, QFile& file) const override;
};
