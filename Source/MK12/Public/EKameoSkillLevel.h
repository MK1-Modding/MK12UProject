#pragma once
#include "CoreMinimal.h"
#include "EKameoSkillLevel.generated.h"

UENUM(BlueprintType)
enum class EKameoSkillLevel : uint8 {
    Beginner,
    Intermediate,
    Expert,
    Unset,
};

