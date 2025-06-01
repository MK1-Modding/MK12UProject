// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CurveMirrorInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct WANIMATIONMIRRORINGRUNTIME_API FCurveMirrorInfo {
	GENERATED_BODY()
public:
	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint16 CurveUid;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		uint16 MirroredCurveUid;

	FCurveMirrorInfo();
};

