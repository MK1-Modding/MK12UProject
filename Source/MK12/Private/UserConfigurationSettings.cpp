// Fill out your copyright notice in the Description page of Project Settings.


#include "UserConfigurationSettings.h"

FUserConfigurationSettings::FUserConfigurationSettings() {
	this->bIsUsingNegativeEdge = false;
	this->bIsUsingAdvancedControls = false;
	this->bIsUsingInputShortcuts = false;
	this->bIsUsingButtonShortcuts = false;
	this->bIsUsingEasyFatalityInput = false;
	this->bIsUsingTournamentPause = false;
	this->bStartSideFlipped = false;
	this->bRumbleEnabled = false;
	this->mPadScanWindowConfig = PadScanWindowConfigType::INVALID;
	this->bIsUsingHoldToOpenPauseMenu = false;
	this->bHasMigratedPauseDelay = false;
}

