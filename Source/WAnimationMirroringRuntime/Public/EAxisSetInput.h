// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EAxisSetInput.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EAxisSetInput : uint8 {
	AXIS_None,
	AXIS_X,
	AXIS_Y,
	AXIS_Z = 4,
	AXIS_XYZ = 7,
};