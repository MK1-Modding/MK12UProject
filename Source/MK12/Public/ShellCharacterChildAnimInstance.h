// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShellCharacterComponentType.h"
#include "ShellCharacterChildAnimInstance.generated.h"

/**
 * 
 */
class UShellCharacterAnimationInstance;

USTRUCT(BlueprintType)
struct MK12_API FShellCharacterChildAnimInstance {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		ShellCharacterComponentType Type;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool SuppressAnimNotifies;

	FShellCharacterChildAnimInstance();
};
