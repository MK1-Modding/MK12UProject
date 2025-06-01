// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MKGearActor.generated.h"

class AMK12GameplaySkeletalActor;
class UMKGearActorComponent;

UCLASS(Abstract, Blueprintable)
class MK12_API AMKGearActor : public AActor
{
	GENERATED_BODY()

public:
	AMKGearActor();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
	UMKGearActorComponent* GearActorComponent;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
	void InitializeGearActor(AMK12GameplaySkeletalActor* inActor);
};
