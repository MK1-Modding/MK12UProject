#pragma once
#include "CoreMinimal.h"
#include "EMusicPhaseIntensity.generated.h"

UENUM(BlueprintType)
enum class EMusicPhaseIntensity : uint8 {
    Low,
    MediumLow,
    MediumHigh,
    High,
    Count,
};

