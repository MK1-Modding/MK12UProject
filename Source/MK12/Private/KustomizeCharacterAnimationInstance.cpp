// Fill out your copyright notice in the Description page of Project Settings.


#include "KustomizeCharacterAnimationInstance.h"

FMK12CharacterViewerGearExamineConstraints::FMK12CharacterViewerGearExamineConstraints() {
	HorizontalViewMin = 0.00f;
	HorizontalViewMax = 0.00f;
	VerticalViewMin = 0.00f;
	VerticalViewMax = 0.00f;
	PhotoModeHorizontalOffset = 0.00f;
}

FMK12CharacterViewerCharacterConstraints::FMK12CharacterViewerCharacterConstraints() {
	minHeightAdjustment = 0.00f;
	maxHeightAdjustment = 0.00f;
	horizontalAdjustment = 0.00f;
}

FShoeBoxOverrides::FShoeBoxOverrides() {
	ShoeBoxAnimLibraryOverride = NULL;
}