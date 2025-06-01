// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "DismembermentContentDefinition.h"
#include "ContentDefinition.h"
#include "BaseCharacterContentDefinition.generated.h"

class AMK12GameplaySkeletalActor;
class UAkSwitchValue;
class UCharacterSelectAnimationInstance;
class UCinemaCameraAsset;
class UKustomizeCharacterAnimationInstance;
class ULevelSequence;
class UMKAssetLibrary;
class UMKDialogueTable;
class UMKLootRewardsAsset;
class UMKScriptAsset;
class UMKSocketMeshList;
class UTexture2D;

UCLASS(Blueprintable, Config = Engine)
class MK12_API UBaseCharacterContentDefinition : public UContentDefinition, public IDismembermentContentDefinition {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UMKScriptAsset* mScriptAsset;

	UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint32 mRegistryFlags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TMap<FName, UMKAssetLibrary*> mBodyTypeCinemaLibraries;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<TSoftClassPtr<AMK12GameplaySkeletalActor>> mSkins;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UAkSwitchValue> mNameSwitch;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftClassPtr<UCharacterSelectAnimationInstance> mCharacterSelectAnimInstanceClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftClassPtr<UKustomizeCharacterAnimationInstance> mKustomizeCharacterAnimInstanceClass;

	UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UMKSocketMeshList> mSocketMeshList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<UMKDialogueTable*> mDialogueTables;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mOverrideDialogueTableIndentifiers;

	UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint64 mIdentifiers;

	UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint64 mSecondaryIdentifiers;

	UPROPERTY(AssetRegistrySearchable, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint64 mSpeechIdentifiers;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<TSoftObjectPtr<ULevelSequence>> mCameraCinemas;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UCinemaCameraAsset> mCameraCinemaAsset;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUISquarePortrait;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUIMirroredSquarePortrait;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUIMapEncounterPortrait;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUITowerPortrait;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUIActiveTowerPortrait;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUIMirroredTowerPortrait;

	UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mUIMirroredActiveTowerPortrait;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UMKLootRewardsAsset* mLootRewards;

public:
	UBaseCharacterContentDefinition();

};
