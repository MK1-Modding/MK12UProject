#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12SingleUseItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12SingleUseItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12SingleUseItemConstPtr();
};

