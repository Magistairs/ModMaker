#include "GamesInterfaces/EU4Interface.h"

#include <ModsContent/EU4/AgeObjectType.h>
#include <ModsContent/EU4/BuildingObjectType.h>
#include <ModsContent/EU4/CasusBellumObjectType.h>
#include <ModsContent/EU4/CenterOfTradeObjectType.h>
#include <ModsContent/EU4/ChurchAspectObjectType.h>
#include <ModsContent/EU4/CountryObjectType.h>
#include <ModsContent/EU4/DecisionObjectType.h>
#include <ModsContent/EU4/EventObjectType.h>
#include <ModsContent/EU4/InterfaceObjectType.h>
#include <ModsContent/EU4/MissionObjectType.h>

EU4Interface::EU4Interface()
  : GameInterface()
{
	WikiUrl                   = "https://eu4.paradoxwikis.com/Modding";
	GameExePathFromGameFolder = "/eu4.exe";
}

void EU4Interface::Initialize()
{
	m_moddableObjectsTypes.emplace_back(std::make_unique<AgeObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<BuildingObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<CasusBellumObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<ChurchAspectObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<CenterOfTradeObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<CountryObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<DecisionObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<EventObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<InterfaceObjectType>());
	m_moddableObjectsTypes.emplace_back(std::make_unique<MissionObjectType>());

	GameInterface::Initialize();
}

void EU4Interface::CreatePanes() const
{
	GameInterface::CreatePanes();
}
