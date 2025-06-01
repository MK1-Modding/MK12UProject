#pragma once
#include "CoreMinimal.h"
#include "EBlockType.generated.h"

UENUM(BlueprintType)
enum class EBlockType : uint8 {
    BLOCKTYPE_NORMAL,
    BLOCKTYPE_PERFECT,
    BLOCKTYPE_RANDOM,
    BLOCK_COUNT,
};

