#pragma once
#include "CoreMinimal.h"
#include "MKLootDropListOnlinePayload.h"
#include "ShrinePurchaseAnalytics.h"
#include "MKCurrencyLootTransactionOnlinePayload.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FMKCurrencyLootTransactionOnlinePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FString, FMKLootDropListOnlinePayload> contextual_droplists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString activity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShrinePurchaseAnalytics Analytics;
    
    FMKCurrencyLootTransactionOnlinePayload();
};

