// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EAxisSet.h"
#include "Templates/SubclassOf.h"
#include "MirrorEntityInfo.generated.h"

/**
 * 
 */
class UMirrorPolicy;

USTRUCT(BlueprintType)
struct MIRRORING_API FMirrorEntityInfo {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName Entity;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSubclassOf<UMirrorPolicy> PolicyType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		EAxisSet AttachMirrorAxis;

	FMirrorEntityInfo();
};
