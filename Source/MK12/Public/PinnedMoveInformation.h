// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PinnedMoveInformation.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FPinnedMoveInformation {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FString mMoveKey;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FString mMoveUnlockName;

	MK12_API FPinnedMoveInformation();
};

