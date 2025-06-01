// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterDefinitionV2.h"

FCharacterDefinitionV2::FCharacterDefinitionV2() {
	this->mStartupFlags = 0;
	this->mLoadBrutalityAssets = false;
	this->mUseAssetNameForHUD = false;
	this->mLookupSkinNameForHUD = false;
	this->mCachedActor = NULL;
	this->mCachedFaderActor = NULL;
	this->mCachedAnimClass = NULL;
	this->mSpeakerIdentifiers = 0;
	this->mIdentifiers = 0;
	this->mSecondaryIdentifiers = 0;
	this->mUnlimitedTalismanCharges = false;
	this->mCheckLockStateOnAllUsers = false;
	this->mUseOpposingInventory = false;
	this->mIsRandomCharacter = false;
	this->mCharacterTypeFilter = ECharacterTypeFilter::MKBaseCharacter;
	this->mCharacterType = ECharacterTypeFilter::MKBaseCharacter;
	this->mIsRandomCustomisation = false;
}
