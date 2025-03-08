#pragma once
#include <PDXModdingAssistant.h>
#include <QtIncludes.h>
#include <Widgets/CollapsibleCategories.h>
#include <Widgets/Pane.h>

class PathsPane : public Pane
{
public:
	PathsPane();
	virtual ~PathsPane() {}

protected:
	QWidget* CreatePathsSection();
	void     CreatePathWidget(QBoxLayout* pLayout, PDXModdingAssistant::EPath type, const QString& label);

	QWidget* CreateFoundModsSection();
};
