#pragma once
#include "CoreMinimal.h"
#include "EReplaySelectionType.h"
#include "EReplayVersionMismatchBehavior.h"
#include "StartupBackgroundSettings.h"
#include "StartupReplaySettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupReplaySettings {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplaySelectionType ReplayType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStartupBackgroundSettings BackgroundOverrideSettings;
    
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool IgnoreDesyncs;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    EReplayVersionMismatchBehavior VersionMismatchBehavior;
    
    FStartupReplaySettings();
};

