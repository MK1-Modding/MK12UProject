#pragma once
#include "CoreMinimal.h"
#include "EBlockMode.generated.h"

UENUM(BlueprintType)
enum class EBlockMode : uint8 {
    BLOCK_OFF,
    BLOCK_AUTO,
    BLOCK_ALL,
    BLOCK_STANCE,
    BLOCK_STANCE_HOLD,
    BLOCK_UP,
    BLOCK_RANDOM_ATTACK,
    BLOCK_RANDOM_COMBO,
    BLOCK_COUNT,
};

