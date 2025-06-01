// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "MirrorEntityInfo.h"
#include "MirrorableType.h"
#include "ComponentPolicyInfo.h"
#include "TimelineControllableType.h"
#include "TimelineControllableActor.generated.h"

class UGameComponent;
class UMirrorComponent;

UCLASS(Abstract, Blueprintable)
class UPPERCUT_API ATimelineControllableActor : public AActor, public ITimelineControllableType, public IMirrorableType {
	GENERATED_BODY()

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		UGameComponent* GameplayComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		UMirrorComponent* MirrorComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FMirrorEntityInfo> MirrorEntityMap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FComponentPolicyInfo RootComponentPolicy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FComponentPolicyInfo MirrorPolicy;

public:
	ATimelineControllableActor(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable)
		void OnPooledActorDestroyed(AActor* pActor);
};
