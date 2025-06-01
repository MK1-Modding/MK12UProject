#pragma once
#include "CoreMinimal.h"
#include "EReplaySelectionType.generated.h"

UENUM()
enum class EReplaySelectionType : int32 {
    LatestFile,
    SpecifiedFile,
    RawData,
};

