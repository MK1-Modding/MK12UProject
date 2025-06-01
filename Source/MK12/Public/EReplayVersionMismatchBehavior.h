#pragma once
#include "CoreMinimal.h"
#include "EReplayVersionMismatchBehavior.generated.h"

UENUM()
enum class EReplayVersionMismatchBehavior : int32 {
    Ignore,
    PromptUserToContinue,
    Exit,
};

