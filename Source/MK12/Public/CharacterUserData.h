// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloodProperties.h"
#include "CharacterBodyType.h"
#include "SkinFXColorProperties.h"
#include "CharacterUserData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MK12_API FCharacterUserData {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		CharacterBodyType CharBodyType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBloodProperties BloodProperties;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		FBloodProperties RuntimeBloodProperties;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FSkinFXColorProperties SkinFXColorProperties;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool IsKameo;

	FCharacterUserData();
};
