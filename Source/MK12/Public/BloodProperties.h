// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BloodProperties.generated.h"

/**
 * 
 */
class UBloodPropertiesDataAsset;

USTRUCT(BlueprintType)
struct MK12_API FBloodProperties {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta = (AllowPrivateAccess = true))
		UBloodPropertiesDataAsset* BloodData;

	FBloodProperties();
};
