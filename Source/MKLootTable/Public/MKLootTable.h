#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKLootTableDropItem.h"
#include "MKLootTable.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootTable : public FMKLootDropItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKLootTableDropItem> mTable;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mInnateDropCount;
    
public:
    FMKLootTable();
};

