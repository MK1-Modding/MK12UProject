#include "StartupLadderSettings.h"

FStartupLadderSettings::FStartupLadderSettings() {
    this->StartingLadderLevel = 0;
    this->SimulateMapModeLevel = 0;
    this->SimulateMapModeSeasonIndex = 0;
    this->LadderSeed = 0;
    this->ProgressiveTowerLevel = 0;
    this->EnableSimulateMapModeLevel = false;
    this->EnableSimulateMapModeSeason = false;
    this->EnableLadderSeedOverride = false;
    this->EnableProgressiveTowerLevelOverride = false;
    this->SkipTowerUI = false;
    this->ShowPlayerSelect = false;
}

