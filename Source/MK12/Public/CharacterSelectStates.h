// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterSelectStates.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class CharacterSelectStates : uint8 {
	CharSelect_None,
	CharSelect_Enter,
	CharSelect_Exit,
	CharSelect_Idle,
	CharSelect_Pick,
	CharSelect_EnvironmentSelect,
};
