#pragma once
#include "CoreMinimal.h"
#include "MKInventoryDataTableRowHandle.h"
#include "MKInventoryItemPrice.generated.h"

class UMKInventoryPriceMultiplierSettings;

USTRUCT(BlueprintType)
struct MKINVENTORY_API FMKInventoryItemPrice {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryDataTableRowHandle CurrencyType;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 PricePerItem;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKInventoryPriceMultiplierSettings* MultiplierSettings;
    
public:
    FMKInventoryItemPrice();
};

