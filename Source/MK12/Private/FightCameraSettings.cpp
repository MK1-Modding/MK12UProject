#include "FightCameraSettings.h"

FFightCameraSettings::FFightCameraSettings() {
    this->DistanceFromTightrope_Minimum = 0.00f;
    this->CharacterPositionOffset = 0.00f;
    this->HeightOffset = 0.00f;
    this->PitchOffsetInDegrees = 0.00f;
    this->LeftDeadZone = 0.00f;
    this->RightDeadZone = 0.00f;
    this->MoveUpPercentage = 0.00f;
    this->TopBoundaryMultiplier = 0.00f;
    this->MoveUpWhenMovingOut = false;
    this->MoveUpThreshold = 0.00f;
    this->OffCenterThreshold = 0.00f;
    this->LeftEdgeYaw = 0.00f;
    this->RightEdgeYaw = 0.00f;
    this->EdgeDistanceThresholdForRotation = 0.00f;
    this->PlayerDistanceToRemoveRotation = 0.00f;
    this->DefaultTagAssistBlendFrames = 0;
    this->OrientationBlendSpeed = 0.00f;
    this->OrientationBlendSpeedFast = 0.00f;
    this->OrientationBlendSpeedFastVertically = 0.00f;
    this->MaxOutOfBoundsDistance = 0.00f;
    this->DeadzoneMinRadius = 0.00f;
    this->DeadzoneOuterRadius = 0.00f;
    this->DeadzoneBlendSpeed = 0.00f;
    this->HeightForLookingAtTopPoint = 0.00f;
}

