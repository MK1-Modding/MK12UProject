#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKFailToDropItem.generated.h"

USTRUCT(BlueprintType)
struct FMKFailToDropItem : public FMKLootDropItem {
    GENERATED_BODY()
public:
    MKLOOTTABLE_API FMKFailToDropItem();
};

