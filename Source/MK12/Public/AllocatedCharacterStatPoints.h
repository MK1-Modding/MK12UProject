#pragma once
#include "CoreMinimal.h"
#include "CharacterStatPoints.h"
#include "AllocatedCharacterStatPoints.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FAllocatedCharacterStatPoints : public FCharacterStatPoints {
    GENERATED_BODY()

protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AutoSpend;
    
public:
    FAllocatedCharacterStatPoints();
};

