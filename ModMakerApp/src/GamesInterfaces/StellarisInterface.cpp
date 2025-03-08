#include "GamesInterfaces/StellarisInterface.h"

StellarisInterface::StellarisInterface()
  : GameInterface()
{
	WikiUrl                   = "https://stellaris.paradoxwikis.com/Modding";
	GameExePathFromGameFolder = "/stellaris.exe";
}

void StellarisInterface::CreatePanes() const
{
	GameInterface::CreatePanes();
}
