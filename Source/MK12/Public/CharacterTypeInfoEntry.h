#pragma once
#include "CoreMinimal.h"
#include "CharacterTypeInfoEntry.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FCharacterTypeInfoEntry {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    float mWeight[5];
    
public:
    FCharacterTypeInfoEntry();
};

