#include "CharacterDefinition.h"

FCharacterDefinition::FCharacterDefinition() {
    this->mCharacterTypeFilter = 0;
    this->mStartupFlags = 0;
    this->mLevel = 0;
    this->bInitializeCharacterStats = false;
    this->bInitializeElementalResists = false;
    this->mOverrideSpawnDist = 0.00f;
    this->bEnableOverrideSpawnDist = false;
    this->mBaseHealthOverride = 0.00f;
    this->mDisableMaxDamageOverride = false;
    this->bEnableOverrideBaseHealth = false;
    this->mLoadSupermoveAssets = false;
    this->mLoadBrutalityAssets = false;
    this->mCheckLockStateOnAllUsers = false;
    this->mUseOpposingInventory = false;
    this->mSpeakerIdentifiers = ESpeechIdentifiers::Invalid;
    this->mIdentifiers = (ECharacterIdentifiers)0;
    this->mSecondaryIdentifiers = ESecondaryCharacterIdentifiers::Races;
}

