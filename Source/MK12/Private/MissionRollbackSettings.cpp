#include "MissionRollbackSettings.h"

FMissionRollbackSettings::FMissionRollbackSettings() {
    this->mInitialRollbackState = MissionRollbackState::Disabled;
    this->mShouldWaitForDisabledRollbacks = false;
}

