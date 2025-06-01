#include "StartupStorySettings.h"

FStartupStorySettings::FStartupStorySettings() {
    this->CharacterDroneOverride = EDronePersonalityType::None;
    this->OpponentDroneOverride = EDronePersonalityType::None;
    this->EnableTYMSettings = false;
    this->EnableLetterbox = false;
    this->IgnorePreMissionChoreo = false;
    this->SkipMovies = false;
}

