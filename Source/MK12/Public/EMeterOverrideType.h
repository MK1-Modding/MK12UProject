#pragma once
#include "CoreMinimal.h"
#include "EMeterOverrideType.generated.h"

UENUM(BlueprintType)
enum class EMeterOverrideType : uint8 {
    None,
    Infinite,
    ForeverEmpty,
};

