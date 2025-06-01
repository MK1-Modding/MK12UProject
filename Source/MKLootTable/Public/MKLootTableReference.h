#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKLootTableReference.generated.h"

class UMKLootTableAsset;

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootTableReference : public FMKLootDropItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKLootTableAsset* mLootTable;
    
public:
    FMKLootTableReference();
};

