#pragma once
#include "CoreMinimal.h"
#include "StartupOnlineMatchupSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupOnlineMatchupSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableTimer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceMatchAccept;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool ForceMatchDecline;
    
    FStartupOnlineMatchupSettings();
};

