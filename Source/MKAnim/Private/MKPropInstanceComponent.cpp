// Fill out your copyright notice in the Description page of Project Settings.


#include "MKPropInstanceComponent.h"

UMKPropInstanceComponent::UMKPropInstanceComponent() {
	this->CurrentAnimation = NULL;
	this->PropClass = NULL;
	this->AutoInstance = true;
	this->IsSharedInstance = false;
	this->bShouldMirrorWithAttachParent = true;
}

void UMKPropInstanceComponent::SetupPropInstance() {
}