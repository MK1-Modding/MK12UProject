// Fill out your copyright notice in the Description page of Project Settings.


#include "MKPropInstance.h"
#include "HierarchicalSkeletalMeshComponent.h"

AMKPropInstance::AMKPropInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->RootComponent = CreateDefaultSubobject<UHierarchicalSkeletalMeshComponent>(TEXT("PrimaryMeshComponent"));
	this->PrimaryMeshComponent = (USkeletalMeshComponent*)RootComponent;
	this->InstanceOwner = NULL;
}