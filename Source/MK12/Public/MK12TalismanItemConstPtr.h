#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12TalismanItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12TalismanItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12TalismanItemConstPtr();
};

