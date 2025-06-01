#pragma once
#include "CoreMinimal.h"
#include "EFacialMaskWeightValues.generated.h"

UENUM(BlueprintType)
enum class EFacialMaskWeightValues : uint8 {
    LeftBrow,
    RightRow,
    LeftEye,
    RightEye,
    LeftCheek,
    RightCheek,
    Nose,
    Lip,
    Jaw,
    Neck,
    Max,
};

