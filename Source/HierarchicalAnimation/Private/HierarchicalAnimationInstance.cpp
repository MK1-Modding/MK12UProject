// Fill out your copyright notice in the Description page of Project Settings.


#include "HierarchicalAnimationInstance.h"

UHierarchicalAnimationInstance::UHierarchicalAnimationInstance() {
	this->AnimationToggle = UseGameplay;
	this->bNoAnimGraphEvalWhenOwnerIsHidden = false;
}
