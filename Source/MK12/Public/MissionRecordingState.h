#pragma once
#include "CoreMinimal.h"
#include "MissionRecordingState.generated.h"

UENUM(BlueprintType)
enum class MissionRecordingState : uint8 {
    Disabled,
    Enabled,
    Disallowed,
};

