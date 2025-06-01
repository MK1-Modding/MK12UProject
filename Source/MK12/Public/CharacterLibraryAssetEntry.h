// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKMovesetPresetID.h"
#include "CharacterLibraryAssetEntry.generated.h"

/**
 * 
 */
class UObject;

USTRUCT(BlueprintType)
struct FCharacterLibraryAssetEntry {
	GENERATED_BODY()
public:
private:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		MKMovesetPresetID Mid;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName mNameID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		int32 mIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UObject> mAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftObjectPtr<UObject> mDefaultAsset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UObject* mAssetRef;

public:
	MK12_API FCharacterLibraryAssetEntry();
};
