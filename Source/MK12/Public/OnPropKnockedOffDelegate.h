// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "OnPropKnockedOffDelegate.generated.h"

/**
 * 
 */
class AMKGamePropInstance;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FOnPropKnockedOff, AMKGamePropInstance*, PropInstance, bool, IsClonePropagation);