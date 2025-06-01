// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CharacterSelectStates.h"
#include "ShellCharacterAnimationInstance.h"
#include "EClashDialogueState.h"
#include "CharacterSelectAnimationInstance.generated.h"

/**
 * 
 */

class UAnimSequence;

UCLASS(Blueprintable, NonTransient)
class MK12_API UCharacterSelectAnimationInstance : public UShellCharacterAnimationInstance
{
	GENERATED_BODY()
	
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		CharacterSelectStates State;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool UseQuickEntry;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool UseIdleForQuickEnter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool DoInstantClash;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float EnterToPickBlendDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float EnterQuickToPickBlendDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float PickToEnvSelectLeftBlendDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float PickToEnvSelectRightBlendDuration;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* Enter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnterQuick;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* Idle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* Pick;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* PickCancel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* PickIdle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnvSelectBeginA;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnvSelectBeginB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnvSelectIdleA;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnvSelectIdleB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnvSelectCancelA;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* EnvSelectCancelB;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		UAnimSequence* DialogueSequence;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		EClashDialogueState DialogueState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool IsSpeakingFirst;

	UCharacterSelectAnimationInstance();

	UFUNCTION(BlueprintCallable)
		void StopDialogue();

	UFUNCTION(BlueprintCallable)
		void StartDialogue();

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UAnimSequence* GetClashIdle() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UAnimSequence* GetClashEnter() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		UAnimSequence* GetClashCancel() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool CanStartClash() const;

	UFUNCTION(BlueprintCallable, BlueprintPure)
		bool CanShowBackdrop() const;

};
