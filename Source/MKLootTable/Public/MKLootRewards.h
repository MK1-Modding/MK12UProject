#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKLootRewardsDropItem.h"
#include "MKLootRewards.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootRewards : public FMKLootDropItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKLootRewardsDropItem> mTable;
    
public:
    FMKLootRewards();
};

