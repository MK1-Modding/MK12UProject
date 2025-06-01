// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EAxisSet.h"
#include "WBBoneMirrorInfo.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FWBBoneMirrorInfo {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		int32 SourceIndex;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		EAxisSet BoneFlipAxis;

	WANIMATIONMIRRORINGRUNTIME_API FWBBoneMirrorInfo();
};