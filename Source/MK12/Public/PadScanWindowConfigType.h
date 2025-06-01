// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "PadScanWindowConfigType.generated.h"

UENUM()
enum class PadScanWindowConfigType : uint32 {
	INVALID,
	LONG,
	MEDIUM,
	SHORT,
};
