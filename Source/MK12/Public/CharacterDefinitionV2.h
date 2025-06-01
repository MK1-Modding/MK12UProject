// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "ECharacterTypeFilter.h"
#include "CharacterDefinitionV2.generated.h"

class AMK12GameplaySkeletalActor;
class UTexture2D;

USTRUCT(BlueprintType)
struct MK12_API FCharacterDefinitionV2 {
	GENERATED_BODY()

protected:
	UPROPERTY(AdvancedDisplay, EditAnywhere, meta = (AllowPrivateAccess = true))
		uint32 mStartupFlags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mLoadBrutalityAssets;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mUseAssetNameForHUD;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mLookupSkinNameForHUD;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		AMK12GameplaySkeletalActor* mCachedActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		AMK12GameplaySkeletalActor* mCachedFaderActor;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		UClass* mCachedAnimClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName mSpeakerName;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint64 mSpeakerIdentifiers;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint64 mIdentifiers;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint64 mSecondaryIdentifiers;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mHUDPortrait;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UTexture2D> mHUDMirrorPortrait;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mUnlimitedTalismanCharges;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mCheckLockStateOnAllUsers;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mUseOpposingInventory;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mIsRandomCharacter;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		ECharacterTypeFilter mCharacterTypeFilter;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		ECharacterTypeFilter mCharacterType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mIsRandomCustomisation;

public:
	FCharacterDefinitionV2();
};
