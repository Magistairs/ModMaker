#pragma once
#include "GameInterface.h"

class StellarisInterface : public GameInterface
{
public:
	StellarisInterface();
	virtual ~StellarisInterface() {}

	virtual void CreatePanes() const;

	virtual QString GetName() const { return "Stellaris"; }
};
