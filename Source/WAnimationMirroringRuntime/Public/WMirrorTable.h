// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "CurveMirrorData.h"
#include "EAxisSet.h"
#include "EAxisSetInput.h"
#include "EMirroringType.h"
#include "MirrorTableFilter.h"
#include "SkeletonMirrorData.h"
#include "WMirrorTable.generated.h"

/**
 * 
 */

class USkeleton;

UCLASS(Blueprintable, Config = Editor)
class WANIMATIONMIRRORINGRUNTIME_API UWMirrorTable : public UObject
{
	GENERATED_BODY()
	
public:
	UWMirrorTable();

public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		USkeleton* Skeleton;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		EAxisSet MirrorAxis;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		EMirroringType MirroringType;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		float MatchBoneThreshold;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FString LeftPatternName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FString RightPatternName;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FString> SelfMirroringBonesPatterns;

	UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FMirrorTableFilter> DisableMirroringFilters;

	UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
		TMap<FString, FString> SuffixPairs;

	UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta = (AllowPrivateAccess = true))
		TMap<FString, FString> InfixPairs;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TMap<FName, FName> CustomCurveMapping;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSet<FName> SelfMirrorNegateCurves;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta = (AllowPrivateAccess = true))
		TMap<FName, FName> MirrorMapping;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, EditFixedSize, meta = (AllowPrivateAccess = true))
		TMap<FName, EAxisSetInput> FlipAxes;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TMap<FName, FName> CurveMapping;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TSet<FName> NegateCurves;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		TArray<FName> UnmirrorableCurves;

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FSkeletonMirrorData SkeletonMirrorData;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FCurveMirrorData CurveMirrorData;
};
