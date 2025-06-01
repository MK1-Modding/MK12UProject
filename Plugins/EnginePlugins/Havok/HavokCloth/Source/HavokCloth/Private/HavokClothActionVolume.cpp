#include "HavokClothActionVolume.h"

AHavokClothActionVolume::AHavokClothActionVolume(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bColored = true;
}

void AHavokClothActionVolume::OnActorEndOverlapDelegate(AActor* OverlappedActor, AActor* OtherActor) {
}

void AHavokClothActionVolume::OnActorBeginOverlapDelegate(AActor* OverlappedActor, AActor* OtherActor) {
}


