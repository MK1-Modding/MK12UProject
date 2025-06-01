#pragma once
#include "CoreMinimal.h"
#include "ETeamType.generated.h"

UENUM()
enum class ETeamType : uint32 {
    Default,
    Endurance,
    TagSimultaneous,
    TestYourMight,
    SingleCharacter,
};

