#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MKInventoryItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct MKINVENTORY_API FMKInventoryItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    FMKInventoryItemConstPtr();
};

