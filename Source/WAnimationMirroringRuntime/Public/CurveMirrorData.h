// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CurveMirrorInfo.h"
#include "CurveMirrorData.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct WANIMATIONMIRRORINGRUNTIME_API FCurveMirrorData {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FCurveMirrorInfo> MirroredCurveUIDList;

	FCurveMirrorData();
};
