#pragma once
#include "CoreMinimal.h"
#include "ETightropeIndex.h"
#include "BackgroundDefinition.generated.h"

class UEnvironmentContentDefinition;

USTRUCT(BlueprintType)
struct MK12_API FBackgroundDefinition {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UEnvironmentContentDefinition> mEnvironment;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETightropeIndex mStartingTightrope;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName mLevelScenario;
    
public:
    FBackgroundDefinition();
};

