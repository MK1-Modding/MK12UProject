#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12AnnouncerItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12AnnouncerItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12AnnouncerItemConstPtr();
};

