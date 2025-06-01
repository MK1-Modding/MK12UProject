// Fill out your copyright notice in the Description page of Project Settings.


#include "TeamDefinitionV2.h"

UTeamDefinitionV2::UTeamDefinitionV2() {
	this->mTeamNum = TeamNum::InvalidTeamNum;
	this->mLeftSideTeam = TeamNum::Team1;
	this->mbOnlyUseForcePinnedMoves = false;
}