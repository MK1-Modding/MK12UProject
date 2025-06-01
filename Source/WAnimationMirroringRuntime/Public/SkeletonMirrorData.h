// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "EAxisSet.h"
#include "WBBoneMirrorInfo.h"
#include "SkeletonMirrorData.generated.h"

/**
 * 
 */

USTRUCT(BlueprintType)
struct FBonePose {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector position;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FQuat Orientation;

	WANIMATIONMIRRORINGRUNTIME_API FBonePose();
};

USTRUCT(BlueprintType)
struct WANIMATIONMIRRORINGRUNTIME_API FSkeletonMirrorData {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FName> BoneNames;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		EAxisSet SkelMirrorAxis;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta = (AllowPrivateAccess = true))
		TArray<FWBBoneMirrorInfo> SkelMirrorTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<int32> Parentage;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FBonePose> RefPose;

	FSkeletonMirrorData();
};
