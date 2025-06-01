// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "MKGearUserAssetData.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class MK12_API UMKGearUserAssetData : public UAssetUserData
{
	GENERATED_BODY()
	
public:
		UMKGearUserAssetData();

public:
	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAkAudioEvent* PostInitEvent;*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint8 EffectSlot;

	UPROPERTY(EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		uint32 regions;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool IsPropRegion(int32 PropRegion) const;

	/*UFUNCTION(BlueprintCallable, BlueprintPure)
		UAkAudioEvent* GetPostInitEvent() const;*/

	UFUNCTION(BlueprintCallable, BlueprintPure)
		uint8 GetEffectSlot() const;
};
