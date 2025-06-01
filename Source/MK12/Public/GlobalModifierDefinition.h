#pragma once
#include "CoreMinimal.h"
#include "FightEventModifierDefinition.h"
#include "GlobalModifierDefinition.generated.h"

class UGlobalModifierContentDefinition;

USTRUCT(BlueprintType)
struct FGlobalModifierDefinition : public FFightEventModifierDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UGlobalModifierContentDefinition> mContentDefinition;
    
    MK12_API FGlobalModifierDefinition();
};

