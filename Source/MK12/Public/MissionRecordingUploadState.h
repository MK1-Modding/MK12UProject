#pragma once
#include "CoreMinimal.h"
#include "MissionRecordingUploadState.generated.h"

UENUM(BlueprintType)
enum class MissionRecordingUploadState : uint8 {
    Disabled,
    Enabled,
    Disallowed,
};

