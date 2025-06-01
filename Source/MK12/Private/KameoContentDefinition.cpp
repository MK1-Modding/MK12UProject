#include "KameoContentDefinition.h"

UKameoContentDefinition::UKameoContentDefinition() {
    this->mNavAssetLibrary = NULL;
    this->mGetupAssetLibrary = NULL;
    this->mDefeatGetupAssetLibrary = NULL;
    this->mCharacterSelectAssetLibrary = NULL;
    this->mKustomizeCharacterAssetLibrary = NULL;
    this->mCinemaAssetsLibrary = NULL;
    this->mAdditionalPartnerHitPoints = 300.00f;
    this->mUIKameoSkillLevel = EKameoSkillLevel::Unset;
}


