// Fill out your copyright notice in the Description page of Project Settings.


#include "MKPlayerStateData.h"

FMKPlayerStateData::FMKPlayerStateData() {
	this->IsDizzy = false;
	this->IsFrozen = false;
	this->IsOpponentInvisible = false;
	this->IsReacting = false;
	this->IsTLAnimatingVictim = false;
	this->IsNavigatingOnGround = false;
	this->IsAttacking = false;
	this->IsActiveFighter = false;
	this->IsKameo = false;
	this->IsInAir = false;
	this->IsJumping = false;
	this->EnableHeadTracking = false;
	this->EnableActiveRagdoll = false;
	this->Health = 0.00f;
	this->IsTeam1 = false;
	this->PlayerID = 0;
	this->IsInKameoAttack = false;
}