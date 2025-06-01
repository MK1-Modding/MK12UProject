// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "SkinFXColorProperties.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MK12_API FSkinFXColorProperties {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FLinearColor BaseColor;

	FSkinFXColorProperties();
};
