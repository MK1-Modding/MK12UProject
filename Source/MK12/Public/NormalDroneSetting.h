#pragma once
#include "CoreMinimal.h"
#include "NormalDroneSetting.generated.h"

USTRUCT(BlueprintType)
struct FNormalDroneSetting {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mZoningWeight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float mRushdownWeight;
    
    MK12_API FNormalDroneSetting();
};

