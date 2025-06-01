#pragma once
#include "CoreMinimal.h"
#include "ModifierDefinition.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FModifierDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mIconOptions;
    
    FModifierDefinition();
};

