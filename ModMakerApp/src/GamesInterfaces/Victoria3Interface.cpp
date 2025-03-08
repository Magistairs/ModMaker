#include "GamesInterfaces/Victoria3Interface.h"

Victoria3Interface::Victoria3Interface()
  : GameInterface()
{
	WikiUrl                   = "https://vic3.paradoxwikis.com/Modding";
	GameExePathFromGameFolder = "/binaries/victoria3.exe";
	GameDebugModeArgs         = "-debug_mode -filewatcher";
}

void Victoria3Interface::CreatePanes() const
{
	GameInterface::CreatePanes();
}
