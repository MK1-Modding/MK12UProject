// Fill out your copyright notice in the Description page of Project Settings.


#include "DefaultSkeletalMeshMirrorPolicy.h"

UDefaultSkeletalMeshMirrorPolicy::UDefaultSkeletalMeshMirrorPolicy() {
	this->SkeletalMesh = NULL;
	this->MirrorTable = NULL;
	this->bSkipMotionBlurOnMirrorStateChange = false;
}