#pragma once
#include "CoreMinimal.h"
#include "EDroneThrowEscapeMode.generated.h"

UENUM(BlueprintType)
enum class EDroneThrowEscapeMode : uint8 {
    THROW_ESCAPE_OFF,
    THROW_ESCAPE_ON,
    THROW_ESCAPE_RANDOM,
    MOVE_COUNT,
};

