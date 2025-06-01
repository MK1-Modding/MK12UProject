#pragma once
#include "CoreMinimal.h"
#include "MKLootDropItem.h"
#include "MKLootDropItemPicker.h"
#include "MKConditionalLootDropItem.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKConditionalLootDropItem : public FMKLootDropItem {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKLootDropItemPicker mMainReward;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKLootDropItemPicker mBackupReward;
    
public:
    FMKConditionalLootDropItem();
};

