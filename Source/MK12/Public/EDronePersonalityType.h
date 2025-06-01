#pragma once
#include "CoreMinimal.h"
#include "EDronePersonalityType.generated.h"

UENUM(BlueprintType)
enum class EDronePersonalityType : uint8 {
    None,
    ButtonMasher,
    CustomSettings,
    ScriptedEncounter,
    Normal,
    Dummy,
    Verifier,
    CharacterOwned,
    Default,
};

