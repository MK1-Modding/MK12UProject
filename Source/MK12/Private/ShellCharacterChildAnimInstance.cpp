// Fill out your copyright notice in the Description page of Project Settings.


#include "ShellCharacterChildAnimInstance.h"

FShellCharacterChildAnimInstance::FShellCharacterChildAnimInstance() {
	this->AnimInstanceClass = NULL;
	this->Type = ShellCharacterComponentType::Component;
	this->SuppressAnimNotifies = false;
}
