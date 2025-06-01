// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "MK12PhotoModeCameraSettings.generated.h"

/**
 * 
 */

UCLASS(Blueprintable)
class MK12_API UMK12PhotoModeCameraSettings : public UDataAsset
{
	GENERATED_BODY()

public:
	UMK12PhotoModeCameraSettings();
	
public:
	/*UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMK12PhotoModeCineCameraSettings mCineCameraSettings;*/

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector mCameraComponentPosition;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FRotator mCameraComponentRotation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float mStartingFieldOfView;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float mInitialHorizontalAngle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float mInitialVerticalAngle;
};
