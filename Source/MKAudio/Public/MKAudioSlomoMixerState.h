#pragma once
#include "CoreMinimal.h"
#include "MKAudioSlomoMixerState.generated.h"

UENUM(BlueprintType)
enum class MKAudioSlomoMixerState : uint8 {
    Normal,
    HalfSpeed,
    DoubleSpeed,
    QuadSpeed,
    Mute,
    Max,
};

