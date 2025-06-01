// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKGameplaySkeletalActorClassOverride.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MK12_API FMKGameplaySkeletalActorClassOverride {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName Key;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UClass* Value;

public:
	FMKGameplaySkeletalActorClassOverride();
};
