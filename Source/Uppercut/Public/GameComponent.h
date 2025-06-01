// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "ComponentPolicyInstance.h"
#include "GameComponent.generated.h"


UCLASS(Blueprintable, EditInlineNew, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class UPPERCUT_API UGameComponent : public UActorComponent {
	GENERATED_BODY()
public:
private:
	UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<FComponentPolicyInstance> Policies;

public:
	UGameComponent(const FObjectInitializer& ObjectInitializer);

};