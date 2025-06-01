#include "HavokClothCollidableComponent.h"

UHavokClothCollidableComponent::UHavokClothCollidableComponent(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ShapeType = EHavokClothCollidableShape::NONE;
    this->SphereRadius = 50.00f;
    this->CapsuleRadius = 50.00f;
    this->CapsuleStartRadius = 50.00f;
    this->CapsuleEndRadius = 50.00f;
    this->CylinderRadius = 50.00f;
    this->NumCylinderSides = 6;
    this->ConvexShapeType = EHavokClothConvexShapeCreation::CONVEX_PLANES;
    this->PhysicsConvexShapeType = EHavokClothConvexShapeCreation::CONVEX_PLANES;
}

void UHavokClothCollidableComponent::SetupTaperedCapsule(const FVector& Start, const FVector& End, float StartRadius, float EndRadius) {
}

void UHavokClothCollidableComponent::SetupSphere(const FVector& Center, float Radius) {
}

void UHavokClothCollidableComponent::SetupPlane(const FVector& Point, const FVector& normal) {
}

void UHavokClothCollidableComponent::SetupPhysicsConvex(EHavokClothConvexShapeCreation InDefaultPhysicsConvexType) {
}

void UHavokClothCollidableComponent::SetupCylinder(const FVector& Start, const FVector& End, float Radius, int32 NumSides) {
}

void UHavokClothCollidableComponent::SetupConvex(EHavokClothConvexShapeCreation InDefaultConvexType) {
}

void UHavokClothCollidableComponent::SetupCapsule(const FVector& Start, const FVector& End, float Radius) {
}

void UHavokClothCollidableComponent::SetupBox(const FVector& Center, const FVector& HalfExtents) {
}


