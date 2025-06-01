// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CharacterLibraryAssetEntry.h"
#include "MKAssetLibrary.generated.h"

/**
 * 
 */

class UMKAssetLibrary;

UCLASS(Blueprintable)
class MK12_API UMKAssetLibrary : public UObject
{
	GENERATED_BODY()
	
public:
	UMKAssetLibrary();

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta = (AllowPrivateAccess = true))
		TArray<FCharacterLibraryAssetEntry> mEntries;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UMKAssetLibrary* mTemplateParent;
};
