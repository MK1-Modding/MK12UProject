// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKPropInstance.h"
#include "MKGamePropInstance.generated.h"

/**
 * 
 */

//class UMKAssetLibrary;
class UMKGearUserAssetData;
class UMKPropInstanceComponent;

UCLASS(Abstract, Blueprintable)
class MK12_API AMKGamePropInstance : public AMKPropInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint32 mRegions;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName mCut;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mIsDroppable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mIsDefaultAngularImpulseEnabled;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mIsClonePropVisibilityTiedToParentProp;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mEnableRootMotionEvaluator;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mAlignFacingToTightrope;

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, Transient, meta = (AllowPrivateAccess = true))
		UMKGearUserAssetData* GearUserAssetData;

	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TMap<FName, UMKAssetLibrary*> AssetLibraries;*/

public:
	AMKGamePropInstance(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
		void SetMaskWeightEnabled(bool bEnabled);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnVisibilityChanged(bool bWasHidden);

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnKnockOffReattach();

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
		void OnKnockOff();

	UFUNCTION(BlueprintCallable)
		void GetRegionString(FString& stringIn);

	UFUNCTION(BlueprintCallable)
		static UMKGearUserAssetData* GetGearUserData(UMKPropInstanceComponent* OwnerComponent);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UMKGearUserAssetData* GetGearAssetUserData() const;
};
