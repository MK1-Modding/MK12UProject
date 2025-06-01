#include "StartupTeamSettings.h"

FStartupTeamSettings::FStartupTeamSettings() {
    this->CompositionPicker = NULL;
    this->TeamFlags = 0;
    this->CharacterFlags = 0;
    this->StartingLife = EStartingLife::Default;
    this->CustomStartingLifePercentage = 0.00f;
    this->CriticalHitsEnabled = false;
    this->ApplySpecialCharacterOverride = false;
    this->TeamType = ETeamType::Default;
    this->KameoStruct = NULL;
    this->TagStruct = NULL;
    this->EnduranceStruct = NULL;
    this->SingleStruct = NULL;
    this->TYMStruct = NULL;
    this->DefaultStruct = NULL;
}

