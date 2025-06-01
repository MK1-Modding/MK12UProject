// Fill out your copyright notice in the Description page of Project Settings.


#include "WMirrorTable.h"

UWMirrorTable::UWMirrorTable() {
	this->Skeleton = NULL;
	this->MirrorAxis = EAxisSet::AXIS_X;
	this->MirroringType = EMirroringType::SymmetryBased;
	this->MatchBoneThreshold = 0.10f;
}