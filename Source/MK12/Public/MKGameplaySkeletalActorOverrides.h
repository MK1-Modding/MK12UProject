// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKGameplaySkeletalActorSupportedOverride.h"
#include "Templates/SubclassOf.h"
#include "MKGameplaySkeletalActorOverrides.generated.h"

/**
 * 
 */
class UMKGameplaySkeletalActorOverride;

USTRUCT(BlueprintType)
struct FMKGameplaySkeletalActorOverrides {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		FMKGameplaySkeletalActorSupportedOverride SupportedOverrides[3];

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<TSubclassOf<UMKGameplaySkeletalActorOverride>> Overrides;

public:
	MK12_API FMKGameplaySkeletalActorOverrides();
};
