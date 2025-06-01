// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "HierarchicalAnimationInstance.h"
#include "GameplayAnimationInstance.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, NonTransient)
class MKANIM_API UGameplayAnimationInstance : public UHierarchicalAnimationInstance
{
	GENERATED_BODY()

public:
	UGameplayAnimationInstance();

};
