#pragma once
#include "CoreMinimal.h"
#include "CharacterFacingDirLock.generated.h"

UENUM(BlueprintType)
enum class CharacterFacingDirLock : uint8 {
    Opponent,
    Left,
    Right,
    Movement,
    Invalid,
};

