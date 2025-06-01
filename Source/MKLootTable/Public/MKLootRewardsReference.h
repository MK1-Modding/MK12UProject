#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKLootRewardsReference.generated.h"

class UMKLootRewardsAsset;

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootRewardsReference : public FMKLootDropItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKLootRewardsAsset* mLootRewards;
    
    FMKLootRewardsReference();
};

