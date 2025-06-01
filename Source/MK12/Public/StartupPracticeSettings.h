#pragma once
#include "CoreMinimal.h"
#include "StartupPracticeSettings.generated.h"

USTRUCT(BlueprintType)
struct FStartupPracticeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool UseStartupSettings;
    
    MK12_API FStartupPracticeSettings();
};

