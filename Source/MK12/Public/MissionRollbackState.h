#pragma once
#include "CoreMinimal.h"
#include "MissionRollbackState.generated.h"

UENUM(BlueprintType)
enum class MissionRollbackState : uint8 {
    Disabled,
    Enabled,
    Disallowed,
};

