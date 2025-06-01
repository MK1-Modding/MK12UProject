// Fill out your copyright notice in the Description page of Project Settings.


#include "MKGearUserAssetData.h"

UMKGearUserAssetData::UMKGearUserAssetData() {
	//this->PostInitEvent = NULL;
	this->EffectSlot = 1;
	this->regions = 0;
}

bool UMKGearUserAssetData::IsPropRegion(int32 PropRegion) const {
	return false;
}

/*UAkAudioEvent* UMKGearUserAssetData::GetPostInitEvent() const {
	return NULL;
}*/

uint8 UMKGearUserAssetData::GetEffectSlot() const {
	return 0;
}