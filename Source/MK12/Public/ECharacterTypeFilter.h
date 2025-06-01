// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ECharacterTypeFilter.generated.h"

UENUM()
enum class ECharacterTypeFilter : uint64 {
	MKBaseCharacter,
	MKCharacter,
	MKKameo,
	MKEnemyAI = 4,
	All = 7,
};
