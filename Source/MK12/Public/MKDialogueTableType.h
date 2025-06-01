#pragma once
#include "CoreMinimal.h"
#include "MKDialogueTableType.generated.h"

UENUM(BlueprintType)
enum class MKDialogueTableType : uint8 {
    Intro,
    Quip,
    Max,
};

