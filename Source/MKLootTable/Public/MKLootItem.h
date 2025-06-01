#pragma once
#include "CoreMinimal.h"
#include "MKLootItem.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootItem {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 Seed;
    
    FMKLootItem();
};

