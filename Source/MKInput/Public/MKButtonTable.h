// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKButton.h"
#include "MKButtonTable.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MKINPUT_API FMKButtonTable {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		MKButton mButtons[25];

	FMKButtonTable();
};
