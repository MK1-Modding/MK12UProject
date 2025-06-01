// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "Engine/EngineTypes.h"
#include "MirrorPolicyInfo.h"
#include "TimelineControllableActor.h"
#include "NRSGameplaySkeletalActor.generated.h"

/**
 * 
 */

class AActor;
class USkeletalMeshComponent;

UCLASS(Abstract, Blueprintable)
class NRSACTOR_API ANRSGameplaySkeletalActor : public ATimelineControllableActor
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta = (AllowPrivateAccess = true))
	USkeletalMeshComponent* PrimaryMeshComponent;
		
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMirrorPolicyInfo PrimaryMeshMirrorPolicy;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool ShouldAlwaysTeleportPhysics;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool ShouldAllowPhysicsInstantiation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool ShouldAllowPhysicsCollision;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TEnumAsByte<ECollisionEnabled::Type> PhysicsCollisionState;

public:
	ANRSGameplaySkeletalActor(const FObjectInitializer& ObjectInitializer);

private:
	UFUNCTION(BlueprintCallable)
		void OnActorHitAudioCallbacks(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit);

};
