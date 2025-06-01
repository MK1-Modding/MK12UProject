// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameParameterBase.h"
#include "BoolGameParameter.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct UPPERCUT_API FBoolGameParameter : public FGameParameterBase {
	GENERATED_BODY()
public:
	FBoolGameParameter();
};
