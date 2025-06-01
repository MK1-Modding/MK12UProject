#include "MKInventoryItemDefinition.h"

FMKInventoryItemDefinition::FMKInventoryItemDefinition() {
    this->Rarity = EMKInventoryItemRarity::None;
    this->bIsDefaultItem = false;
    this->bItemRequiresPostInitialize = false;
    this->bIsDefaultFavorite = false;
    this->MaxCount = 0;
}

