#pragma once
#include "CoreMinimal.h"
#include "FightEventModifierDefinition.h"
#include "TeamModifierDefinition.generated.h"

class UTeamModifierContentDefinition;

USTRUCT(BlueprintType)
struct FTeamModifierDefinition : public FFightEventModifierDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTeamModifierContentDefinition> mContentDefinition;
    
    MK12_API FTeamModifierDefinition();
};

