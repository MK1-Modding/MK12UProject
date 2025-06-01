#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKTestLootItem.h"
#include "MKTestLootDropItem.generated.h"

USTRUCT(BlueprintType)
struct FMKTestLootDropItem : public FMKLootDropItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKTestLootItem mItem;
    
    MKLOOTTABLE_API FMKTestLootDropItem();
};

