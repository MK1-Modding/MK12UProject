// Fill out your copyright notice in the Description page of Project Settings.


#include "TimelineControllableActor.h"
#include "MirrorComponent.h"
#include "GameComponent.h"

ATimelineControllableActor::ATimelineControllableActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->GameplayComponent = CreateDefaultSubobject<UGameComponent>(TEXT("GameplayComponent"));
	this->MirrorComponent = CreateDefaultSubobject<UMirrorComponent>(TEXT("MirrorComponent"));
}

void ATimelineControllableActor::OnPooledActorDestroyed(AActor* pActor) {
}