// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "PinnedMoveInformation.h"
#include "PlayerInfoUser.h"
#include "TeamNum.h"
#include "TeamDefinitionV2.generated.h"

/**
 * 
 */
UCLASS(Abstract, Blueprintable, EditInlineNew)
class MK12_API UTeamDefinitionV2 : public UMissionComponent {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TeamNum mTeamNum;

protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TeamNum mLeftSideTeam;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FPinnedMoveInformation> mPinnedMoveInformation;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool mbOnlyUseForcePinnedMoves;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FPlayerInfoUser> mUsers;

public:
	UTeamDefinitionV2();

};
