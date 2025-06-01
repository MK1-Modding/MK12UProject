// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "NRSGameplaySkeletalActor.h"
#include "ComponentPolicyInfo.h"
#include "MKGameplaySkeletalActorOverrides.h"
#include "MK12GameplaySkeletalActor.generated.h"

class AActor;
class UMKAssetLibrary;
class UMKGearComponent;
class UMKPropFactoryComponent;
class UMKPropInstanceComponent;
class UObject;
class USceneComponent;

/**
 * 
 */

UCLASS(Abstract, Blueprintable)
class MK12_API AMK12GameplaySkeletalActor : public ANRSGameplaySkeletalActor
{
	GENERATED_BODY()

public:
	AMK12GameplaySkeletalActor(const FObjectInitializer& ObjectInitializer);

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		UMKGearComponent* GearComponent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMKGameplaySkeletalActorOverrides Overrides;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FComponentPolicyInfo PrimaryAnimationPolicy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FComponentPolicyInfo DismembermentPolicy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FComponentPolicyInfo FXFoleyPolicy;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TMap<FName, UMKAssetLibrary*> AssetLibraries;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool CinemaManagesPhysics;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool CinemaManagesCloth;

public:
	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void ShowMask();

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
		void OverridePalette(AActor* TargetActor) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
		void OverrideMKPropInstanceComponent(UMKPropInstanceComponent* Component, FName Key) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
		void OverrideMKPropFactoryComponent(UMKPropFactoryComponent* Component, FName Key) const;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnRegisterShareSet();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnPostInitializeComponents();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void HideMask();

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool HasMatchingGameplayTagInHierarchy() const;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, BlueprintPure)
		USceneComponent* GetFaceMesh() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UMKAssetLibrary* GetAssetLibrary(FName LibraryName) const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UObject* FindObjectOverride(UClass* ObjectType, FName Key) const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UClass* FindClassOverride(UClass* ClassType, FName Key) const;

	UFUNCTION(BlueprintCallable, BlueprintPure = false)
		void ApplyPaletteOverrideOnMaterialParam(AActor* TargetActor, FName OverrideName, FName MaterialParamName) const;
};
