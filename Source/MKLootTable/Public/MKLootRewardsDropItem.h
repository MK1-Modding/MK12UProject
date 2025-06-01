#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItemPicker.h"
#include "MKLootDropItemPrerequisitePicker.h"
#include "MKLootRewardsDropItem.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootRewardsDropItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKLootDropItemPicker mDropItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMKLootDropItemPrerequisitePicker> mPrerequisites;
    
    FMKLootRewardsDropItem();
};

