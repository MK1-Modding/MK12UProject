// Fill out your copyright notice in the Description page of Project Settings.


#include "MKPropFactoryComponent.h"

UMKPropFactoryComponent::UMKPropFactoryComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
	this->ActorType = NULL;
	this->InstancePoolSize = 0;
	this->AutoInstance = true;
	this->AllowPoolGrowth = true;
}

void UMKPropFactoryComponent::InitializeInstancePool() const {
}

