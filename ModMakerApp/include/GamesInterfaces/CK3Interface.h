#pragma once
#include "GameInterface.h"

class CK3Interface : public GameInterface
{
public:
	CK3Interface();
	virtual ~CK3Interface() {}

	virtual void CreatePanes() const;

	virtual QString GetName() const { return "Crusader Kings III"; }
};
