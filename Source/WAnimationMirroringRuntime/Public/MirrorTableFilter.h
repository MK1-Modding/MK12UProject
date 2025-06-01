// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MirrorTableFilter.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct FMirrorTableFilter {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FString Keyword;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bPropagateToChildren;

	WANIMATIONMIRRORINGRUNTIME_API FMirrorTableFilter();
};
