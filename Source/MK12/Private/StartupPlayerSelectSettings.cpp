#include "StartupPlayerSelectSettings.h"

FStartupPlayerSelectSettings::FStartupPlayerSelectSettings() {
    this->ForceLongEnterAnimations = false;
    this->bPlayerSelectForcedSimulation = false;
    this->bPlayerSelectRandomRosterSelections = false;
    this->bPlayerSelectRandomKameoSelections = false;
    this->bPlayerSelectRandomBackgroundSelections = false;
    this->bPlayerSelectButtonMashing = false;
    this->bPlayerSelectButtonMashingOnline = false;
    this->PlayerSelectButtonMashingInputDelay = 0;
    this->DisablePlayerSelectTimeout = false;
}

