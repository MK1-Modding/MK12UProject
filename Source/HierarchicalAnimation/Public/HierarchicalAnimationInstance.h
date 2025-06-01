// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "AnimSequencerInstance.h"
#include "SharedAnimationParameters.h"
#include "HierarchicalAnimationInstance.generated.h"

/**
 * 
 */

class UAnimSequence;
class USkeletalMeshComponent;

UENUM(BlueprintType)
enum AnimationToggleBehaviour {
	UseGameplay,
	UseSequencer,
};

UCLASS(Abstract, Blueprintable, NonTransient)
class HIERARCHICALANIMATION_API UHierarchicalAnimationInstance : public UAnimSequencerInstance
{
	GENERATED_BODY()
	
public:
	UHierarchicalAnimationInstance();
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FSharedAnimationParameters AnimParameters;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TEnumAsByte<AnimationToggleBehaviour> AnimationToggle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bNoAnimGraphEvalWhenOwnerIsHidden;
};
