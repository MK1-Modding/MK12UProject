#pragma once
#include "CoreMinimal.h"
#include "EDroneMovementMode.generated.h"

UENUM(BlueprintType)
enum class EDroneMovementMode : uint8 {
    MOVE_STAND,
    MOVE_DUCK,
    MOVE_JUMP,
    MOVE_JUMP_FORWARD,
    MOVE_JUMP_BACKWARD,
    MOVE_COUNT,
};

