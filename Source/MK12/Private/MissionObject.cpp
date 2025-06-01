#include "MissionObject.h"
#include "ElementalDebuffManager.h"
#include "ModifierManager.h"

UMissionObject::UMissionObject() {
    this->FightCameraClass = NULL;
    this->MusicPlayerClass = NULL;
    this->MusicPlayerMissionStates.AddDefaulted(1);
    this->AnnouncerClass = NULL;
    this->AudioMixerClass = NULL;
    this->LoadingScreen = NULL;
    this->mDebuffManager = CreateDefaultSubobject<UElementalDebuffManager>(TEXT("DebuffManager"));
    this->mModifierManager = CreateDefaultSubobject<UModifierManager>(TEXT("ModifierManager"));
    this->mBaseXpReward = 0;
    this->mTightropeMaxDistanceOverride = 0.00f;
    this->mRandSeed = 0;
    this->bHideFightHUD = false;
    this->bLowerHealthBarPosition = false;
    this->bHealthBarPositionOverride = false;
    this->mEnableNetworkInputs = false;
    this->mShowHUDHealthNumbers = false;
    this->mShowHUDHealthOverride = false;
    this->mLoadBrutalityAssets = true;
    this->mSuppressOpponentWinnersName = false;
    this->mbShouldShowModifiersOnHUD = false;
    this->mHUDWordFlags = 0;
    this->mQuestKardUpdatesEnabled = false;
    this->bEndOfSlowMoDisabled = false;
    this->bUseMaxDamageOverrdeSettings = true;
}

bool UMissionObject::HasMissionComponentByType(UClass* InClass) const {
    return false;
}


