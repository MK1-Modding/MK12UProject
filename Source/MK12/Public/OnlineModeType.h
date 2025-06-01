#pragma once
#include "CoreMinimal.h"
#include "OnlineModeType.generated.h"

UENUM()
enum class OnlineModeType : int32 {
    None,
    Versus,
    Koth,
    Practice,
    Last,
};

