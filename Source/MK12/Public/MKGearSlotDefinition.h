// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKGearSlotDefinition.generated.h"

/**
 * 
 */
class AMKGearActor;

USTRUCT(BlueprintType)
struct MK12_API FMKGearSlotDefinition {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftClassPtr<AMKGearActor> Template;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSoftClassPtr<AMKGearActor> Default;

public:
	FMKGearSlotDefinition();
};
