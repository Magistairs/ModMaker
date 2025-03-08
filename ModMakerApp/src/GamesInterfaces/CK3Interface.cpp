#include "GamesInterfaces/CK3Interface.h"

CK3Interface::CK3Interface()
  : GameInterface()
{
	WikiUrl                   = "https://ck3.paradoxwikis.com/Modding";
	GameExePathFromGameFolder = "/binaries/ck3.exe";
	GameDebugModeArgs         = "-debug_mode -develop";
}

void CK3Interface::CreatePanes() const
{
	GameInterface::CreatePanes();
}
