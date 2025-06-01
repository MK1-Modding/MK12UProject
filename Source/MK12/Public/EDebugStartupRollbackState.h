#pragma once
#include "CoreMinimal.h"
#include "EDebugStartupRollbackState.generated.h"

UENUM(BlueprintType)
enum class EDebugStartupRollbackState : uint8 {
    MissionDefault,
    Enable,
    Disallow,
};

