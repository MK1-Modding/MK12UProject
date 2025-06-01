// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKGameMode.h"
#include "FightingGameMode.generated.h"

/**
 * 
 */

class UPlayerSelectSubMode;

UCLASS(Abstract, Blueprintable)
class MK12_API UFightingGameMode : public UMKGameMode
{
	GENERATED_BODY()
	
public:
	UFightingGameMode();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSubclassOf<UPlayerSelectSubMode> mPlayerSelect;
};
