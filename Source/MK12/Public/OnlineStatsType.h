#pragma once
#include "CoreMinimal.h"
#include "OnlineStatsType.generated.h"

UENUM()
enum class OnlineStatsType : int32 {
    None,
    Casual,
    Ranked,
    Tournament,
    Last,
};

