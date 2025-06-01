#pragma once
#include "CoreMinimal.h"
#include "FlipStanceOverrideBehaviour.generated.h"

UENUM(BlueprintType)
enum class FlipStanceOverrideBehaviour : uint8 {
    Normal,
    ReverseFacing,
    EnableMoveBackwards,
};

