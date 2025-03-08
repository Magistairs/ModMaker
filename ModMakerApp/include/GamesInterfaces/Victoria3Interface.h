#pragma once
#include "GameInterface.h"

class Victoria3Interface : public GameInterface
{
public:
	Victoria3Interface();
	virtual ~Victoria3Interface() {}

	virtual void CreatePanes() const;

	virtual QString GetName() const { return "Victoria 3"; }
};
