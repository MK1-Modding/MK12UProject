// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ShellCharacterAnimationInstance.h"
#include "KustomizeCharacterAnimationInstance.generated.h"

/**
 * 
 */

class UAnimSequence;
class UMK12PhotoModeCameraSettings;
class USkeletalMeshComponent;
class UMKAssetLibrary;

UENUM(BlueprintType)
enum class EKustomizeCharacterStates : uint8 {
	KCS_None,
	KCS_Enter,
	KCS_Idle,
	KCS_Inspect,
};

USTRUCT(BlueprintType)
struct FShoeBoxOverrides {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FName ID;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UMKAssetLibrary* ShoeBoxAnimLibraryOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector RelativePositionOffsetOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FRotator RelativeRotationOverride;

	MK12_API FShoeBoxOverrides();
};

USTRUCT(BlueprintType)
struct FMK12CharacterViewerGearExamineConstraints {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float HorizontalViewMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float HorizontalViewMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float VerticalViewMin;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float VerticalViewMax;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector FocusTargetLocation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float PhotoModeHorizontalOffset;

	FMK12CharacterViewerGearExamineConstraints();
};

USTRUCT(BlueprintType)
struct FMK12CharacterViewerCharacterConstraints {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector minPos;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVector maxPos;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float minHeightAdjustment;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float maxHeightAdjustment;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float horizontalAdjustment;

	MK12_API FMK12CharacterViewerCharacterConstraints();
};

UCLASS(Blueprintable, NonTransient)
class MK12_API UKustomizeCharacterAnimationInstance : public UShellCharacterAnimationInstance
{
	GENERATED_BODY()

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		EKustomizeCharacterStates State;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta = (AllowPrivateAccess = true))
		USkeletalMeshComponent* MimicPuppeteer;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsPhotoModeActive;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bPoseChangeActive;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* Enter;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* Idle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* Inspect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* InspectCancel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* InspectIdle;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* CamInspect;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* CamInspectCancel;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* CamToGearSelectOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UAnimSequence* CamCharSelectIdleOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMK12CharacterViewerGearExamineConstraints ExamineConstraints;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMK12CharacterViewerCharacterConstraints CharacterViewerConstraints;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FShoeBoxOverrides> ShoeBoxOverridesList;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		UMK12PhotoModeCameraSettings* mPhotoModeCameraSettingsOverride;

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnMimicParentSet(USkeletalMeshComponent* MimicParent);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
		void OnCharacterReady();

};
