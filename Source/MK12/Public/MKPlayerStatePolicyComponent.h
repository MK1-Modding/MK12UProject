// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MKPlayerStateData.h"
#include "MKPlayerStatePolicyComponent.generated.h"


UCLASS(Blueprintable, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class MK12_API UMKPlayerStatePolicyComponent : public UActorComponent {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMKPlayerStateData PlayerState;

	UMKPlayerStatePolicyComponent(const FObjectInitializer& ObjectInitializer);

};
