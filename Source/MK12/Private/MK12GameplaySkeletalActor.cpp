// Fill out your copyright notice in the Description page of Project Settings.


#include "MK12GameplaySkeletalActor.h"
#include "HierarchicalSkeletalMeshComponent.h"
#include "MKGearComponent.h"

AMK12GameplaySkeletalActor::AMK12GameplaySkeletalActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->RootComponent = CreateDefaultSubobject<UHierarchicalSkeletalMeshComponent>(TEXT("PrimaryMeshComponent"));
	this->PrimaryMeshComponent = (USkeletalMeshComponent*)RootComponent;
	this->GearComponent = CreateDefaultSubobject<UMKGearComponent>(TEXT("GearComponent"));
	this->CinemaManagesPhysics = false;
	this->CinemaManagesCloth = false;
}


void AMK12GameplaySkeletalActor::OverridePalette(AActor* TargetActor) const {
}

void AMK12GameplaySkeletalActor::OverrideMKPropInstanceComponent(UMKPropInstanceComponent* Component, FName Key) const {
}

void AMK12GameplaySkeletalActor::OverrideMKPropFactoryComponent(UMKPropFactoryComponent* Component, FName Key) const {
}




bool AMK12GameplaySkeletalActor::HasMatchingGameplayTagInHierarchy() const {
	return false;
}

USceneComponent* AMK12GameplaySkeletalActor::GetFaceMesh_Implementation() const {
	return NULL;
}

UMKAssetLibrary* AMK12GameplaySkeletalActor::GetAssetLibrary(FName LibraryName) const {
	return NULL;
}

UObject* AMK12GameplaySkeletalActor::FindObjectOverride(UClass* ObjectType, FName Key) const {
	return NULL;
}

UClass* AMK12GameplaySkeletalActor::FindClassOverride(UClass* ClassType, FName Key) const {
	return NULL;
}

void AMK12GameplaySkeletalActor::ApplyPaletteOverrideOnMaterialParam(AActor* TargetActor, FName OverrideName, FName MaterialParamName) const {
}

