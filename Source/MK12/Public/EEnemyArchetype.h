#pragma once
#include "CoreMinimal.h"
#include "EEnemyArchetype.generated.h"

UENUM(BlueprintType)
enum class EEnemyArchetype : uint8 {
    Trainee,
    Grunt,
    Lieutenant,
    Mini,
    Major,
    Final,
    Titan,
    Unknown,
    MAX,
};

