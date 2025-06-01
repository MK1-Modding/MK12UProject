#pragma once
#include "CoreMinimal.h"
#include "TYMCharacterStates.generated.h"

UENUM(BlueprintType)
enum class TYMCharacterStates : uint8 {
    TYM_Stance,
    TYM_Stance_Idle_Blend,
    TYM_Attack,
    TYM_Exit_Windup,
    TYM_Invalid,
};

