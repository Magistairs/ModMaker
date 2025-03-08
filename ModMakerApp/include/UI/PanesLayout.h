#pragma once
#include "ConfigFile.h"

#include <QtIncludes.h>

class Pane;
class PanesLayout : public QObject
{
public:
	PanesLayout(const char* name, QObject* pParent);
	virtual ~PanesLayout();

	void                      AddPane(Pane* pPane);
	const std::vector<Pane*>& GetPanes() const { return m_panes; }
	void                      CreateDefaultLayout();
	void                      ApplyLayout();

	virtual bool eventFilter(QObject* watched, QEvent* event) override;

private:
	std::vector<Pane*> m_panes;
};
