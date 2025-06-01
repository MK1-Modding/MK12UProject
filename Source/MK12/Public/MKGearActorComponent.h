// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "MKGearActorComponent.generated.h"

class AMK12GameplaySkeletalActor;

UCLASS(Blueprintable, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent))
class MK12_API UMKGearActorComponent : public USceneComponent
{
	GENERATED_BODY()
		
public:
	UMKGearActorComponent();

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
	TSoftClassPtr<AMK12GameplaySkeletalActor> ParentTemplate;

};
