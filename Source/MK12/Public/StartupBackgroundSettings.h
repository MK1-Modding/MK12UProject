#pragma once
#include "CoreMinimal.h"
#include "BackgroundDefinition.h"
#include "StartupBackgroundSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupBackgroundSettings {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBackgroundDefinition BackgroundDefinition;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IsRandom;
    
    FStartupBackgroundSettings();
};

