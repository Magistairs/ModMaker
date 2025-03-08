#pragma once
#include <QtIncludes.h>
#include <Widgets/Pane.h>

class KeywordsPane : public Pane
{
public:
	KeywordsPane(QString category);
	virtual ~KeywordsPane() {}

private:
	QString m_category{"all"};
};
