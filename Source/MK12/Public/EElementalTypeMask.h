#pragma once
#include "CoreMinimal.h"
#include "EElementalTypeMask.generated.h"

UENUM()
enum class EElementalTypeMask : uint32 {
    None,
    Acid,
    Blood,
    Chaos = 4,
    Dark = 8,
    Electric = 16,
    Energy = 32,
    Fire = 64,
    Ice = 128,
    Magic = 256,
    Physical = 512,
};

