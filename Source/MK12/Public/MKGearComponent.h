// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MKGearSlotDefinition.h"
#include "MKGearComponent.generated.h"

/**
 * 
 */
class AMKGearActor;

UCLASS(Blueprintable, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class MK12_API UMKGearComponent : public UActorComponent {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FMKGearSlotDefinition> Slots;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<AMKGearActor*> OwnedActors;

public:
	UMKGearComponent(const FObjectInitializer& ObjectInitializer);

};
