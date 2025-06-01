// Fill out your copyright notice in the Description page of Project Settings.


#include "MirrorComponent.h"

UMirrorComponent::UMirrorComponent() {
	this->bMirror = false;
	this->bLastMirrorState = false;
	this->bMirrorStateChangedThisTick = false;
	this->bComponentsMirrorWithAttachParent = true;
	this->bAllowAssetCustomization = false;
}