// Fill out your copyright notice in the Description page of Project Settings.


#include "ShellCharacterAnimationInstance.h"

UShellCharacterAnimationInstance::UShellCharacterAnimationInstance() {
	this->AllowAnimInterrupt = false;
	this->AmIOnLeft = true;
	this->ShouldMimicPose = false;
	this->ParentMesh = NULL;
	this->AnimLibrary = NULL;
	this->CurrentStateMachineBlendWeight = 0.00f;
	this->SuppressAnimNotifies = false;
}

void UShellCharacterAnimationInstance::TickBlendWeight() {
}

void UShellCharacterAnimationInstance::SetTimeDilation(float TimeDilation) {
}

void UShellCharacterAnimationInstance::SetSimulationWeight(float SimulationWeight) {
}

void UShellCharacterAnimationInstance::SetPropAnimInstance(FName PropId, TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass, bool bSuppressAnimNotifies) {
}

void UShellCharacterAnimationInstance::SetComponentAnimInstance(FName ComponentName, TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass, bool bSuppressAnimNotifies) {
}

void UShellCharacterAnimationInstance::SetCloneAnimInstance(FName CloneName, TSubclassOf<UShellCharacterAnimationInstance> AnimInstanceClass, bool bSuppressAnimNotifies, int32 CloneIndex) {
}

void UShellCharacterAnimationInstance::SetAnimLibrary(UMKAssetLibrary* NewAnimLibrary) {
}

void UShellCharacterAnimationInstance::ResetPropAttachment(FName PropId) {
}



void UShellCharacterAnimationInstance::HideProp(FName PropId, bool ShouldHide) {
}

void UShellCharacterAnimationInstance::HideComponent(FName ComponentName, bool ShouldHide) {
}

void UShellCharacterAnimationInstance::HideCharacter(bool ShouldHide) {
}

bool UShellCharacterAnimationInstance::HasCurve(FName CurveName) const {
	return false;
}

AActor* UShellCharacterAnimationInstance::GetProp(FName PropId) {
	return NULL;
}

float UShellCharacterAnimationInstance::GetOverriddenTransitionDurationWeight(int32 MachineIndex, int32 TransitionIndex, float OverrideDuration) {
	return 0.0f;
}

USkeletalMeshComponent* UShellCharacterAnimationInstance::GetMeshComponent(FName ComponentName) {
	return NULL;
}

UAnimSequence* UShellCharacterAnimationInstance::GetLibraryAnim(FName NameID) const {
	return NULL;
}

UActorComponent* UShellCharacterAnimationInstance::GetComponentByName(TSubclassOf<UActorComponent> ComponentClass, FName ComponentName) {
	return NULL;
}

void UShellCharacterAnimationInstance::DestroyManagedNiagaraEffect(FName EffectId) {
}

void UShellCharacterAnimationInstance::DestroyAllManagedNiagaraEffects() {
}

void UShellCharacterAnimationInstance::DeactivateManagedNiagaraEffect(FName EffectId) {
}

void UShellCharacterAnimationInstance::ClearTimeDilation() {
}

void UShellCharacterAnimationInstance::ClearSimulationWeight() {
}

void UShellCharacterAnimationInstance::ClearAnimInterrupt() {
}

void UShellCharacterAnimationInstance::ClearActiveCuts() {
}

void UShellCharacterAnimationInstance::AttachProp(FName PropId, USceneComponent* Parent, FName SocketName, EAttachmentRule LocationRule, EAttachmentRule RotationRule, EAttachmentRule ScaleRule, bool bWeldSimulatedBodies) {
}

void UShellCharacterAnimationInstance::ApplyActiveCuts() {
}

void UShellCharacterAnimationInstance::AddManagedNiagaraEffect(UFXSystemComponent* NiagaraEffect, FName EffectId) {
}