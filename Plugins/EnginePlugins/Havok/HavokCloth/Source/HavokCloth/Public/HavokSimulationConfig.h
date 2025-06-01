#pragma once
#include "CoreMinimal.h"
#include "HavokSimulationConfig.generated.h"

USTRUCT(BlueprintType)
struct FHavokSimulationConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ConfigName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName SimulateOperatorName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SimulateOperatorId;
    
    HAVOKCLOTH_API FHavokSimulationConfig();
};

