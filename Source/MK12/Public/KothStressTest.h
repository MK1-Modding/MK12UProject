#pragma once
#include "CoreMinimal.h"
#include "KothStressTest.generated.h"

UENUM(BlueprintType)
enum class KothStressTest : uint8 {
    None,
    Disconnect,
    MessageDelay,
    Afk = 4,
    Last = Afk,
};

