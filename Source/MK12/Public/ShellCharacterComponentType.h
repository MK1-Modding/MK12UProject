// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShellCharacterComponentType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class ShellCharacterComponentType : uint8 {
	Component,
	Prop,
	Clone,
	Max,
};
