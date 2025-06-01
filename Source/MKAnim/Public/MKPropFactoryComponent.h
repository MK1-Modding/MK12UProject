// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "EntityFactory.h"
#include "MKPropFactoryComponent.generated.h"


class AActor;
class ANRSGameplaySkeletalActor;

UCLASS(Blueprintable, EditInlineNew, ClassGroup = Custom, meta = (BlueprintSpawnableComponent))
class MKANIM_API UMKPropFactoryComponent : public UActorComponent, public IEntityFactory {
	GENERATED_BODY()
public:
	DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPropFactoryInstanceSpawned, AActor*, NewActor);

	UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FPropFactoryInstanceSpawned OnPoolInstanceSpawned;

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSubclassOf<ANRSGameplaySkeletalActor> ActorType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FName> NamedInstanceList;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint32 InstancePoolSize;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<ANRSGameplaySkeletalActor*> PoolInstances;

	UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool AutoInstance;

	UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool AllowPoolGrowth;

public:
	UMKPropFactoryComponent(const FObjectInitializer& ObjectInitializer);

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
		void InitializeInstancePool() const;

};
