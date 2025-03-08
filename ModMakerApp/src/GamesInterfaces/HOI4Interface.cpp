#include "GamesInterfaces/HOI4Interface.h"

HOI4Interface::HOI4Interface()
  : GameInterface()
{
	WikiUrl                   = "https://hoi4.paradoxwikis.com/Modding";
	GameExePathFromGameFolder = "/hoi4.exe";
	GameDebugModeArgs         = "-debug";
}

void HOI4Interface::CreatePanes() const
{
	GameInterface::CreatePanes();
}
