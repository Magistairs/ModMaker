#pragma once
#include <QtIncludes.h>
#include <Widgets/Pane.h>

class ModsListPane : public Pane
{
public:
	ModsListPane();
	virtual ~ModsListPane() {}

	void CreateModsList();
};
