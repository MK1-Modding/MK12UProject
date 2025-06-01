#pragma once
#include "CoreMinimal.h"
#include "StartupTestReplaySettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupTestReplaySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bButtonMashersEnabled;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> mReplayFileNames;
    
    FStartupTestReplaySettings();
};

