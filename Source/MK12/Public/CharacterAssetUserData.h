// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/AssetUserData.h"
#include "CharacterUserData.h"
#include "CharacterAssetUserData.generated.h"

/**
 * 
 */

class UMKAssetLibrary;

UCLASS()
class MK12_API UCharacterAssetUserData : public UAssetUserData
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FCharacterUserData UserData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<UMKAssetLibrary*> ReferencedLibraries;

	UCharacterAssetUserData();
};
