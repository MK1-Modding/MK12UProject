// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKGameplaySkeletalActorSupportedOverride.generated.h"

/**
 * 
 */
class UMKGameplaySkeletalActorOverride;

USTRUCT(BlueprintType)
struct MK12_API FMKGameplaySkeletalActorSupportedOverride {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftClassPtr<UMKGameplaySkeletalActorOverride> Template;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftClassPtr<UMKGameplaySkeletalActorOverride> Default;

public:
	FMKGameplaySkeletalActorSupportedOverride();
};

