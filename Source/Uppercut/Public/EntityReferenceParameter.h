// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameParameterBase.h"
#include "EntityReferenceParameter.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct UPPERCUT_API FEntityReferenceParameter : public FGameParameterBase {
	GENERATED_BODY()
public:
	FEntityReferenceParameter();
};
