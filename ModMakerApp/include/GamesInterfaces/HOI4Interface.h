#pragma once
#include "GameInterface.h"

class HOI4Interface : public GameInterface
{
public:
	HOI4Interface();
	virtual ~HOI4Interface() {}

	virtual void CreatePanes() const;

	virtual QString GetName() const { return "Heart Of Iron IV"; }
};
