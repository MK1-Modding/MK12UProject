#pragma once
#include "CoreMinimal.h"
#include "ElementalTypeChartEntry.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FElementalTypeChartEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float Weight[10];
    
    FElementalTypeChartEntry();
};

