#pragma once
#include "CoreMinimal.h"
#include "EKothMatchType.generated.h"

UENUM()
enum class EKothMatchType : int32 {
    Standard,
    HotSeat,
    Survivor,
    Tournament,
};

