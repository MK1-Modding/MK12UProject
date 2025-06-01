// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameplayAnimationInstance.h"
#include "ShellCharacterChildAnimInstance.h"
#include "ShellCharacterAnimationInstance.generated.h"

/**
 * 
 */

class AActor;
class UActorComponent;
class UAnimSequence;
class UFXSystemComponent;
class UMKAssetLibrary;
class UObject;
class USceneComponent;
class UShellCharacterAnimationInstance;
class USkeletalMeshComponent;
class UShellCharacterAnimationInstance;


UCLASS(Abstract, Blueprintable, NonTransient)
class MK12_API UShellCharacterAnimationInstance : public UGameplayAnimationInstance
{
	GENERATED_BODY()
	
public:
	UShellCharacterAnimationInstance();

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool AllowAnimInterrupt;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool AmIOnLeft;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool ShouldMimicPose;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		USkeletalMeshComponent* ParentMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UMKAssetLibrary* AnimLibrary;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FShellCharacterChildAnimInstance> ChildInstances;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FName> ActiveCuts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float CurrentStateMachineBlendWeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool SuppressAnimNotifies;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<UObject*> LibraryAssets;

	UFUNCTION(BlueprintCallable)
		void TickBlendWeight();

	UFUNCTION(BlueprintCallable)
		void SetTimeDilation(float TimeDilation);

	UFUNCTION(BlueprintCallable)
		void SetSimulationWeight(float SimulationWeight);

	UFUNCTION(BlueprintCallable)
		void SetPropAnimInstance(FName PropId, TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass, bool bSuppressAnimNotifies);

	UFUNCTION(BlueprintCallable)
		void SetComponentAnimInstance(FName ComponentName, TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass, bool bSuppressAnimNotifies);

	UFUNCTION(BlueprintCallable)
		void SetCloneAnimInstance(FName CloneName, TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass, bool bSuppressAnimNotifies, int32 CloneIndex);

	UFUNCTION(BlueprintCallable)
		void SetAnimLibrary(UMKAssetLibrary* NewAnimLibrary);

	UFUNCTION(BlueprintCallable)
		void ResetPropAttachment(FName PropId);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnInitialVisibility();

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnChildInstancesSetup();

	UFUNCTION(BlueprintCallable)
		void HideProp(FName PropId, bool ShouldHide);

	UFUNCTION(BlueprintCallable)
		void HideComponent(FName ComponentName, bool ShouldHide);

	UFUNCTION(BlueprintCallable)
		void HideCharacter(bool ShouldHide);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool HasCurve(FName CurveName) const;

	UFUNCTION(BlueprintCallable)
		AActor* GetProp(FName PropId);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		float GetOverriddenTransitionDurationWeight(int32 MachineIndex, int32 TransitionIndex, float OverrideDuration);

	UFUNCTION(BlueprintCallable)
		USkeletalMeshComponent* GetMeshComponent(FName ComponentName);

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UAnimSequence* GetLibraryAnim(FName NameID) const;

	UFUNCTION(BlueprintCallable)
		UActorComponent* GetComponentByName(TSubclassOf<UActorComponent> ComponentClass, FName ComponentName);

	UFUNCTION(BlueprintCallable)
		void DestroyManagedNiagaraEffect(FName EffectId);

	UFUNCTION(BlueprintCallable)
		void DestroyAllManagedNiagaraEffects();

	UFUNCTION(BlueprintCallable)
		void DeactivateManagedNiagaraEffect(FName EffectId);

	UFUNCTION(BlueprintCallable)
		void ClearTimeDilation();

	UFUNCTION(BlueprintCallable)
		void ClearSimulationWeight();

	UFUNCTION(BlueprintCallable)
		void ClearAnimInterrupt();

	UFUNCTION(BlueprintCallable)
		void ClearActiveCuts();

	UFUNCTION(BlueprintCallable)
		void AttachProp(FName PropId, USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies);

	UFUNCTION(BlueprintCallable)
		void ApplyActiveCuts();

	UFUNCTION(BlueprintCallable)
		void AddManagedNiagaraEffect(UFXSystemComponent* NiagaraEffect, FName EffectId);

};
