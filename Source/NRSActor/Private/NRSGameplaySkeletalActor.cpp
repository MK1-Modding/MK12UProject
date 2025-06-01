// Fill out your copyright notice in the Description page of Project Settings.


#include "NRSGameplaySkeletalActor.h"

ANRSGameplaySkeletalActor::ANRSGameplaySkeletalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->PrimaryMeshComponent = NULL;
	this->ShouldAlwaysTeleportPhysics = false;
	this->ShouldAllowPhysicsInstantiation = true;
	this->ShouldAllowPhysicsCollision = true;
	this->PhysicsCollisionState = ECollisionEnabled::QueryAndPhysics;
}

void ANRSGameplaySkeletalActor::OnActorHitAudioCallbacks(AActor* SelfActor, AActor* OtherActor, FVector NormalImpulse, const FHitResult& Hit) {
}