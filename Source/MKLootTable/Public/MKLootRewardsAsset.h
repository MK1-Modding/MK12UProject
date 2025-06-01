#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "MKLootRewards.h"
#include "MKLootRewardsAsset.generated.h"

UCLASS(Blueprintable)
class MKLOOTTABLE_API UMKLootRewardsAsset : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKLootRewards mLootRewards;
    
public:
    UMKLootRewardsAsset();

};

