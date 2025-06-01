#include "HavokClothCollidableBaseComponent.h"

UHavokClothCollidableBaseComponent::UHavokClothCollidableBaseComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->bEnabled = true;
    this->bAutomaticallyUpdateTranformAndVelocity = true;
    this->bCollidablePinchDetectionEnabled = false;
    this->CollidablePinchDetectionRadius = 0.00f;
    this->CollidablePinchDetectionPriority = 0;
    this->bCollidableVirtualCollisionPointCollisionEnabled = false;
}

void UHavokClothCollidableBaseComponent::SetVirtualCollisionPointCollisionEnabled(bool bVirtualCollisionEnabled) {
}

void UHavokClothCollidableBaseComponent::SetPinchDetectionRadius(float pinchDetectionRadius) {
}

void UHavokClothCollidableBaseComponent::SetPinchDetectionPriority(uint8 pinchDetectionPriority) {
}

void UHavokClothCollidableBaseComponent::SetPinchDetectionEnabled(bool bPinchDetectionEnabled) {
}

void UHavokClothCollidableBaseComponent::SetCollidableTransform(const FTransform& Transform) {
}

void UHavokClothCollidableBaseComponent::SetCollidableLinearVelocity(const FVector& LinearVelocity) {
}

void UHavokClothCollidableBaseComponent::SetCollidableEnabled(bool bInEnabled) {
}

void UHavokClothCollidableBaseComponent::SetCollidableAngularVelocityInRadians(const FVector& AngularVelocity) {
}

void UHavokClothCollidableBaseComponent::SetCollidableAngularVelocityInDegrees(const FVector& AngularVelocity) {
}

void UHavokClothCollidableBaseComponent::SetAutoUpdate(bool bUpdateFromOwner) {
}

void UHavokClothCollidableBaseComponent::ImplicitSetTransform(const FTransform& GoalTransform, const FTransform& PreviousTransform, bool Normalize) {
}

void UHavokClothCollidableBaseComponent::ImplicitSetTranformAndVelocities(const FTransform& GoalTransform, const FVector& GoalVelocity, const FVector& GoalAngularVelocity) {
}


