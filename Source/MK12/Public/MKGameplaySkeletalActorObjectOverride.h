// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKGameplaySkeletalActorObjectOverride.generated.h"

/**
 * 
 */
class UObject;

USTRUCT(BlueprintType)
struct MK12_API FMKGameplaySkeletalActorObjectOverride {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName Key;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UObject* Value;

public:
	FMKGameplaySkeletalActorObjectOverride();
};

