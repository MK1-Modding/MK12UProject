// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "TimelineControllableType.generated.h"

/**
 * 
 */
UINTERFACE(Blueprintable)
class UPPERCUT_API UTimelineControllableType : public UInterface {
	GENERATED_BODY()
};

class UPPERCUT_API ITimelineControllableType : public IInterface {
	GENERATED_BODY()
protected:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectUncreated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectSuspended();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectHiddenInGame(bool bHidden);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectExitedCinema();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectEnteredCinema();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectDestroyed();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnGameplayObjectActivated();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void BluePrint_OnDestroy();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		bool BluePrint_IsReadyToSuspend() const;

};

