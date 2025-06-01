#pragma once
#include "CoreMinimal.h"
#include "StartupOnlineSeasonSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupOnlineSeasonSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DisableSeasons;
    
    FStartupOnlineSeasonSettings();
};

