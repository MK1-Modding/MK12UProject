// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ECloneInstanceBehavior.generated.h"

/**
 * 
 */
UENUM()
enum class ECloneInstanceBehavior : int32 {
	Default,
	ForceInstance,
	ForceNoInstance,
};
