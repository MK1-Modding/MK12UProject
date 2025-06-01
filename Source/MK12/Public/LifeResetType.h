#pragma once
#include "CoreMinimal.h"
#include "LifeResetType.generated.h"

UENUM(BlueprintType)
enum class LifeResetType : uint8 {
    ResetEveryRound,
    ResetOnLoss,
    ResetWhenEmpty,
    Reset50PercentOfMissingHealth,
};

