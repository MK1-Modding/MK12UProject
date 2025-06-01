// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "MKGameModeManager.generated.h"

/**
 * 
 */

class UMKBaseGameMode;

UCLASS(Blueprintable)
class MK12_API UMKGameModeManager : public UGameInstanceSubsystem
{
	GENERATED_BODY()
	
public:
	UMKGameModeManager();
private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<UMKBaseGameMode*> mActiveGameModeStack;

private:
	UFUNCTION(BlueprintCallable)
		UMKBaseGameMode* GetActiveModeOnTopOfStack_Blueprint();
};
