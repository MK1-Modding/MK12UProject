#include "HavokClothActor.h"
#include "HavokClothEntityComponent.h"

AHavokClothActor::AHavokClothActor(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->ClothEntityComponent = CreateDefaultSubobject<UHavokClothEntityComponent>(TEXT("UHavokClothEntityRenderComponent0"));
    this->ClothEntityComponent->SetupAttachment(RootComponent);
}


