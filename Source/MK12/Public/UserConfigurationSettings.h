// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "MKButtonTable.h"
#include "PadScanWindowConfigType.h"
#include "UserConfigurationSettings.generated.h"

/**
 * 
 */
USTRUCT(BlueprintType)
struct MK12_API FUserConfigurationSettings {
	GENERATED_BODY()
public:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingNegativeEdge;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingAdvancedControls;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingInputShortcuts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingButtonShortcuts;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingEasyFatalityInput;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingTournamentPause;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bStartSideFlipped;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bRumbleEnabled;

	UPROPERTY(EditAnywhere, meta = (AllowPrivateAccess = true))
		PadScanWindowConfigType mPadScanWindowConfig;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		FMKButtonTable mRemappedButtonTable;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bIsUsingHoldToOpenPauseMenu;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bHasMigratedPauseDelay;

	FUserConfigurationSettings();
};
