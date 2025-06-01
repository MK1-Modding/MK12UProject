#pragma once
#include "CoreMinimal.h"
#include "EMapModeNodeType.generated.h"

UENUM(BlueprintType)
enum class EMapModeNodeType : uint8 {
    None,
    VersusFight,
    PracticeFight,
    Forge,
    Shop,
    TestYourMight,
    Tower,
    Portal,
    Item,
    Interact,
    ChaosRealmPortal,
    Teleporter,
    Message,
};

