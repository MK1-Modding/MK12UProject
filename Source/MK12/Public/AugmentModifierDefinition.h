#pragma once
#include "CoreMinimal.h"
#include "FightEventModifierDefinition.h"
#include "AugmentModifierDefinition.generated.h"

class UAugmentModifierContentDefinition;

USTRUCT(BlueprintType)
struct MK12_API FAugmentModifierDefinition : public FFightEventModifierDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UAugmentModifierContentDefinition> mContentDefinition;
    
    FAugmentModifierDefinition();
};

