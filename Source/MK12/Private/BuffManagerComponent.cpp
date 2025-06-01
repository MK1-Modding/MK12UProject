// Fill out your copyright notice in the Description page of Project Settings.


#include "BuffManagerComponent.h"

UBuffManagerComponent::UBuffManagerComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
}

UBuffPropertySet* UBuffManagerComponent::GetOwnedPropertySet(TSubclassOf<UBuffPropertySet> InPropertySetClass) const {
	return NULL;
}

