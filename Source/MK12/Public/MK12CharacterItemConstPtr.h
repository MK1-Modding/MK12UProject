#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemPtrBase.h"
#include "MK12CharacterItemConstPtr.generated.h"

USTRUCT(BlueprintType)
struct FMK12CharacterItemConstPtr : public FMKInventoryItemPtrBase {
    GENERATED_BODY()
public:
    MK12_API FMK12CharacterItemConstPtr();
};

