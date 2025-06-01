// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NRSGameplaySkeletalActor.h"
#include "MKPropInstance.generated.h"

/**
 * 
 */

class UMKPropInstanceComponent;

UCLASS(Abstract, Blueprintable)
class MKANIM_API AMKPropInstance : public ANRSGameplaySkeletalActor
{
	GENERATED_BODY()

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		UMKPropInstanceComponent* InstanceOwner;

public:
	AMKPropInstance(const FObjectInitializer& ObjectInitializer);
};
