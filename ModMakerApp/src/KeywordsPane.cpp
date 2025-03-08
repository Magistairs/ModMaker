#include "KeywordsPane.h"

#include "PDXModdingAssistant.h"

KeywordsPane::KeywordsPane(QString category)
  : Pane("Keywords", PDXModdingAssistant::g_pMainWnd)
  , m_category(category)
{
}
