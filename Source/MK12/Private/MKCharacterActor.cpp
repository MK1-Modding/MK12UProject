// Fill out your copyright notice in the Description page of Project Settings.


#include "MKCharacterActor.h"
#include "MKPropFactoryComponent.h"
#include "BuffManagerComponent.h"

AMKCharacterActor::AMKCharacterActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->TempGameplayCharacterUserData = NULL;
	this->bIsClone = false;
	this->BuffManagerComponent = CreateDefaultSubobject<UBuffManagerComponent>(TEXT("BuffManagerComponent"));
	this->CloneFactory = CreateDefaultSubobject<UMKPropFactoryComponent>(TEXT("CharClone"));
	this->OverrideCloneInstanceBehavior = ECloneInstanceBehavior::Default;
	this->ClonePoolSize = 5;
	this->IsCharacterProp = false;
}

void AMKCharacterActor::SetIsKameo(bool IsKameo) {
}


void AMKCharacterActor::OnActorHitRegistered(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}

bool AMKCharacterActor::IsClone() const {
	return false;
}

FSkinFXColorProperties AMKCharacterActor::GetSkinFXColorProperties() const {
	return FSkinFXColorProperties{};
}

bool AMKCharacterActor::GetIsKameo() const {
	return false;
}

FString AMKCharacterActor::GetCharName() const {
	return TEXT("");
}

CharacterBodyType AMKCharacterActor::GetBodyType() const {
	return CharacterBodyType::MaleS;
}

FBloodProperties AMKCharacterActor::GetBloodProperties() const {
	return FBloodProperties{};
}