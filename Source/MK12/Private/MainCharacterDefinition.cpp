#include "MainCharacterDefinition.h"

FMainCharacterDefinition::FMainCharacterDefinition() {
    this->bInitializeCharacterStats = false;
    this->bInitializeElementalResists = false;
    this->mLevel = 0;
    this->mBaseHealthOverride = 0.00f;
    this->mDisableMaxDamageOverride = false;
    this->bEnableOverrideBaseHealth = false;
    this->mOverrideSpawnDist = 0.00f;
    this->bEnableOverrideSpawnDist = false;
    this->mShouldExecuteStoryOverride = false;
    this->mLoadSupermoveAssets = false;
    this->mApplySkinHUDPortraitOverride = false;
    this->mCharacterFacingLock = CharacterFacingDirLock::Opponent;
    this->mFlipStanceOverrideBehaviour = FlipStanceOverrideBehaviour::Normal;
}

