#pragma once
#include "GameInterface.h"

class EU4Interface : public GameInterface
{
public:
	EU4Interface();
	virtual ~EU4Interface() {}

	virtual void Initialize() override;

	virtual void    CreatePanes() const override;
	virtual QString GetName() const override { return "Europa Universalis IV"; }
};
