#pragma once
#include "CoreMinimal.h"
#include "ETutorialCharacterPauseSection.generated.h"

UENUM(BlueprintType)
enum class ETutorialCharacterPauseSection : uint8 {
    None,
    Punish,
    WakeupAttack,
    Reversal,
    WakeupReversal,
    SpecialCancel,
    PerfectBlock,
    ThrowEscape,
    KameoBreaker,
    BlockPressure1,
    HitPressure1,
};

