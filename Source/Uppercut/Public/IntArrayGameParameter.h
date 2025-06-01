// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameParameterBase.h"
#include "IntArrayGameParameter.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct UPPERCUT_API FIntArrayGameParameter : public FGameParameterBase {
	GENERATED_BODY()
public:
	FIntArrayGameParameter();
};
