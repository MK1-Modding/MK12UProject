#include "HavokClothActionWind.h"

UHavokClothActionWind::UHavokClothActionWind(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bAutoActivate = true;
    this->WindDirectionSource = NULL;
    this->WindMinSpeed = -3.00f;
    this->WindMaxSpeed = 15.00f;
    this->WindFrequency = 0.50f;
    this->MaximumDrag = 3.00f;
}

void UHavokClothActionWind::SetWindMinSpeed(float MinSpeed) {
}

void UHavokClothActionWind::SetWindMaxSpeed(float MaxSpeed) {
}

void UHavokClothActionWind::SetWindMaxDrag(float MaxDrag) {
}

void UHavokClothActionWind::SetWindFrequency(float Frequency) {
}

void UHavokClothActionWind::SetWindDirectionSource(AWindDirectionalSource* NewWindDirectionSource) {
}


