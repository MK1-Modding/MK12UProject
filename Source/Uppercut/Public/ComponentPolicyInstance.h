// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ComponentPolicyInstance.generated.h"

/**
 * 
 */
class UGameParameterPolicy;
class UObject;

USTRUCT(BlueprintType)
struct FComponentPolicyInstance {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UObject* Component;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UGameParameterPolicy* Policy;

	UPPERCUT_API FComponentPolicyInstance();
};
