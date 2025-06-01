// Fill out your copyright notice in the Description page of Project Settings.


#include "MKGamePropInstance.h"

AMKGamePropInstance::AMKGamePropInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	//this->mPropSide = EMKPropSide::None;
	this->mRegions = 0;
	this->mIsDroppable = true;
	this->mIsDefaultAngularImpulseEnabled = false;
	this->mIsClonePropVisibilityTiedToParentProp = false;
	this->mEnableRootMotionEvaluator = false;
	this->mAlignFacingToTightrope = false;
	this->GearUserAssetData = NULL;
}

void AMKGamePropInstance::SetMaskWeightEnabled(bool bEnabled) {
}

void AMKGamePropInstance::OnVisibilityChanged_Implementation(bool bWasHidden) {
}

void AMKGamePropInstance::OnKnockOffReattach_Implementation() {
}

void AMKGamePropInstance::OnKnockOff_Implementation() {
}

void AMKGamePropInstance::GetRegionString(FString& stringIn) {
}

UMKGearUserAssetData* AMKGamePropInstance::GetGearUserData(UMKPropInstanceComponent* OwnerComponent) {
	return NULL;
}

UMKGearUserAssetData* AMKGamePropInstance::GetGearAssetUserData() const {
	return NULL;
}