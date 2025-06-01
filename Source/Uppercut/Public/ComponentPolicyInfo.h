// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ComponentPolicyInfo.generated.h"

/**
 * 
 */
class UGameParameterPolicy;

USTRUCT(BlueprintType)
struct UPPERCUT_API FComponentPolicyInfo {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName Component;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSubclassOf<UGameParameterPolicy> PolicyType;

	FComponentPolicyInfo();
};
