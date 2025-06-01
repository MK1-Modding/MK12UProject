#pragma once
#include "CoreMinimal.h"
#include "EMKInventoryItemRarity.generated.h"

UENUM(BlueprintType)
enum class EMKInventoryItemRarity : uint8 {
    None,
    Rarity1,
    Rarity2,
    Rarity3,
    Rarity4,
    Rarity5,
    Common = Rarity1,
    Uncommon = Rarity2,
    Rare = Rarity3,
    Epic = Rarity4,
    Legendary = Rarity5,
};

