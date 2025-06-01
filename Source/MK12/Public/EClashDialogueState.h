// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EClashDialogueState.generated.h"

/**
 * 
 */
UENUM(BlueprintType)
enum class EClashDialogueState : uint8 {
	Idle,
	Speaking,
	Speaking_Idle,
	OpponentSpeaking,
};
