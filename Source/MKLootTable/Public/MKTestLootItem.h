#pragma once
#include "CoreMinimal.h"
#include "MKLootItem.h"
#include "MKTestLootItem.generated.h"

USTRUCT(BlueprintType)
struct FMKTestLootItem : public FMKLootItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mTestInt;
    
    MKLOOTTABLE_API FMKTestLootItem();
};

