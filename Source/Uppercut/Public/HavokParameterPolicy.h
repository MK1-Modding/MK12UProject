// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BoolArrayGameParameter.h"
#include "BoolGameParameter.h"
#include "DynamicParameterList.h"
#include "EntityReferenceParameter.h"
#include "FloatArrayGameParameter.h"
#include "FloatGameParameter.h"
#include "GameParameterPolicy.h"
#include "IntArrayGameParameter.h"
#include "IntGameParameter.h"
#include "NameArrayGameParameter.h"
#include "NameGameParameter.h"
#include "StringGameParameter.h"
#include "VectorGameParameter.h"
#include "HavokParameterPolicy.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, EditInlineNew)
class UPPERCUT_API UHavokParameterPolicy : public UGameParameterPolicy {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FFloatGameParameter ClothSimulationWeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter BlendClothSimulationWeightToDefault;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FFloatGameParameter PhysicsSimulationWeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter ApplyPhysicsSimulationWeight;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter FrozenState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FStringGameParameter RequestReset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter ShouldOverrideNumResetSteps;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FIntGameParameter NumOverrideResetSteps;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter SimulateDuringReset;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVectorGameParameter Impulse;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FNameGameParameter ImpulseBone;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FVectorGameParameter Torque;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FNameGameParameter TorqueBone;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FIntArrayGameParameter CollisionChannelResponses;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FEntityReferenceParameter ClothPoseCopySource;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FNameArrayGameParameter SimWeightOverrideTags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FFloatArrayGameParameter SimWeightOverrideValues;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter ClothIgnoreTimeDilationOverride;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter EnableClothAutoFreeze;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FDynamicParameterList SimWeightOverrideParams;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter ClothVisible;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolGameParameter AffectAttachedActorVisibility;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FNameArrayGameParameter FrozenStateOverrideTags;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FBoolArrayGameParameter FrozenStateOverrideValues;

	UHavokParameterPolicy();

};
