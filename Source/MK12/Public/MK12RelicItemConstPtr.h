#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12RelicItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12RelicItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12RelicItemConstPtr();
};

