#include "StartupTYMSettings.h"

FStartupTYMSettings::FStartupTYMSettings() {
    this->mTimeInSeconds = 0;
    this->InfiniteTimer = false;
    this->mTimeToStrikeInSeconds = 0;
    this->EnableBreakableOverride = false;
    this->mOverrideResult = TYMResultOverride::None;
}

