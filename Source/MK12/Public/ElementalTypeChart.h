#pragma once
#include "CoreMinimal.h"
#include "ElementalTypeChartEntry.h"
#include "ElementalTypeChart.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FElementalTypeChart {
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementalTypeChartEntry Entries[10];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<float> Multipliers;
    
public:
    FElementalTypeChart();
};

