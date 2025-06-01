// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MirrorPolicy_AttachmentBase.h"
#include "DefaultSkeletalMeshMirrorPolicy.generated.h"

/**
 * 
 */
class USkeletalMesh;
class UWMirrorTable;

UCLASS(Blueprintable, EditInlineNew)
class MIRRORING_API UDefaultSkeletalMeshMirrorPolicy : public UMirrorPolicy_AttachmentBase {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		USkeletalMesh* SkeletalMesh;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UWMirrorTable* MirrorTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector ScaleInvertAxes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bSkipMotionBlurOnMirrorStateChange;

public:
	UDefaultSkeletalMeshMirrorPolicy();

};
