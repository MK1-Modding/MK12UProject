#pragma once
#include "CoreMinimal.h"
#include "CharacterStatPoints.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FCharacterStatPoints {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 KoreStatPoints[5];
    
public:
    FCharacterStatPoints();
};

