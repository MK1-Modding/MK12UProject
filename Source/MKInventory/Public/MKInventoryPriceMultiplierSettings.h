#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "EMKInventoryItemRarity.h"
#include "MKInventoryPriceMultiplierSettings.generated.h"

UCLASS(Blueprintable)
class MKINVENTORY_API UMKInventoryPriceMultiplierSettings : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EMKInventoryItemRarity, float> RarityMultipliers;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<int32, float> LevelMultipliers;
    
    UMKInventoryPriceMultiplierSettings();

};

