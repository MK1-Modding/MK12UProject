#include "AIDefinition.h"

FAIDefinition::FAIDefinition() {
    this->mDroneType = EDronePersonalityType::None;
    this->mDroneDifficulty = EAIDifficultyLevel::Level_0;
    this->mShouldTrack = false;
}

