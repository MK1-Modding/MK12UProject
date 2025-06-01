#pragma once
#include "CoreMinimal.h"
#include "MKTestLootDropItem.h"
#include "MKExclusiveTestLootDropItem.generated.h"

USTRUCT(BlueprintType)
struct FMKExclusiveTestLootDropItem : public FMKTestLootDropItem {
    GENERATED_BODY()
public:
    MKLOOTTABLE_API FMKExclusiveTestLootDropItem();
};

