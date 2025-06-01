// Fill out your copyright notice in the Description page of Project Settings.


#include "GameParameterPolicy.h"
#include "Components/ActorComponent.h"

UGameParameterPolicy::UGameParameterPolicy() {
	this->SupportedClass = UActorComponent::StaticClass();
}




bool UGameParameterPolicy::BluePrint_IsReadyForOwnerToSuspend_Implementation(UObject* VisualEntity) const {
	return false;
}