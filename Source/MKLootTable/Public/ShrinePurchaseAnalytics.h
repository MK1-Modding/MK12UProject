#pragma once
#include "CoreMinimal.h"
#include "ShrineCommonColumnAnalytics.h"
#include "ShrinePurchaseAnalytics.generated.h"

USTRUCT(BlueprintType)
struct MKLOOTTABLE_API FShrinePurchaseAnalytics {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString view_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString encounter_guid;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString transaction_id;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString transaction_type;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FShrineCommonColumnAnalytics common_columns;
    
    FShrinePurchaseAnalytics();
};

