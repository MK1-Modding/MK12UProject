#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12KameoItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12KameoItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12KameoItemConstPtr();
};

