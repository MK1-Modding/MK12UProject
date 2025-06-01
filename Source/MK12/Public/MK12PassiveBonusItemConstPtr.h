#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12PassiveBonusItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12PassiveBonusItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12PassiveBonusItemConstPtr();
};

