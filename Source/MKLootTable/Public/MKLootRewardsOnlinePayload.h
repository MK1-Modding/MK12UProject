#pragma once
#include "CoreMinimal.h"
#include "MKLootDropListOnlinePayload.h"
#include "MKLootRewardsOnlinePayload.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKLootRewardsOnlinePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMKLootDropListOnlinePayload> contextual_droplists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString activity;
    
    FMKLootRewardsOnlinePayload();
};

