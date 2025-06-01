// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterBodyType.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class CharacterBodyType : uint8 {
	MaleS,
	MaleM,
	MaleL,
	MaleXL,
	FemS,
	FemM,
	FemM_NoHeel,
	FemL,
	Goro,
};
