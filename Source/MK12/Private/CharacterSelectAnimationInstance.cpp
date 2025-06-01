// Fill out your copyright notice in the Description page of Project Settings.


#include "CharacterSelectAnimationInstance.h"

UCharacterSelectAnimationInstance::UCharacterSelectAnimationInstance() {
	this->State = CharacterSelectStates::CharSelect_None;
	this->UseQuickEntry = true;
	this->UseIdleForQuickEnter = false;
	this->DoInstantClash = false;
	this->EnterToPickBlendDuration = 0.20f;
	this->EnterQuickToPickBlendDuration = 0.20f;
	this->PickToEnvSelectLeftBlendDuration = 0.20f;
	this->PickToEnvSelectRightBlendDuration = 0.20f;
	this->Enter = NULL;
	this->EnterQuick = NULL;
	this->Idle = NULL;
	this->Pick = NULL;
	this->PickCancel = NULL;
	this->PickIdle = NULL;
	this->EnvSelectBeginA = NULL;
	this->EnvSelectBeginB = NULL;
	this->EnvSelectIdleA = NULL;
	this->EnvSelectIdleB = NULL;
	this->EnvSelectCancelA = NULL;
	this->EnvSelectCancelB = NULL;
	this->DialogueSequence = NULL;
	this->DialogueState = EClashDialogueState::Idle;
	this->IsSpeakingFirst = false;
}

void UCharacterSelectAnimationInstance::StopDialogue() {
}

void UCharacterSelectAnimationInstance::StartDialogue() {
}

UAnimSequence* UCharacterSelectAnimationInstance::GetClashIdle() const {
	return NULL;
}

UAnimSequence* UCharacterSelectAnimationInstance::GetClashEnter() const {
	return NULL;
}

UAnimSequence* UCharacterSelectAnimationInstance::GetClashCancel() const {
	return NULL;
}

bool UCharacterSelectAnimationInstance::CanStartClash() const {
	return false;
}

bool UCharacterSelectAnimationInstance::CanShowBackdrop() const {
	return false;
}