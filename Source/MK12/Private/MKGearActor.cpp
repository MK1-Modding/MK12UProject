// Fill out your copyright notice in the Description page of Project Settings.


#include "MKGearActor.h"
#include "MKGearActorComponent.h"

AMKGearActor::AMKGearActor() {
	this->RootComponent = CreateDefaultSubobject<UMKGearActorComponent>(TEXT("Root"));
	this->GearActorComponent = (UMKGearActorComponent*)RootComponent;
}