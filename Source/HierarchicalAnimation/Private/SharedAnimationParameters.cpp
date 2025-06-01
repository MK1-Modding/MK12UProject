// Fill out your copyright notice in the Description page of Project Settings.


#include "SharedAnimationParameters.h"

FSharedAnimationParameters::FSharedAnimationParameters() {
	this->CurrentAnimation = NULL;
	this->CurrentTime = 0.00f;
	this->Mirrored = false;
	this->BlendTime = 0.00f;
	this->BlendWeight = 0.00f;
	this->YawCorrection = 0.00f;
	this->SkeletonBlendAxes = 0;
	this->bExtractRootMotion = false;
	this->MotionExtractionAxes = 0;
	this->CopySourceMesh = NULL;
	this->SequenceNumber = 0;
}