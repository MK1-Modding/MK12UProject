// Fill out your copyright notice in the Description page of Project Settings.


#include "BaseCharacterContentDefinition.h"

UBaseCharacterContentDefinition::UBaseCharacterContentDefinition() {
	this->mScriptAsset = NULL;
	this->mRegistryFlags = 0;
	this->mOverrideDialogueTableIndentifiers = false;
	this->mIdentifiers = 1;
	this->mSecondaryIdentifiers = 0;
	this->mSpeechIdentifiers = 1;
	this->mLootRewards = NULL;
}