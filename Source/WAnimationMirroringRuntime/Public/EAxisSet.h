// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EAxisSet.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EAxisSet : uint8 {
	AXIS_None,
	AXIS_X,
	AXIS_Y,
	AXIS_Z = 4,
	AXIS_XY = 3,
	AXIS_XZ = 5,
	AXIS_YZ,
	AXIS_XYZ,
};
