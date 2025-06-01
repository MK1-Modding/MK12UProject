#pragma once
#include "CoreMinimal.h"
#include "MKInventoryJuiceArgs.h"
#include "StartupInventorySettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupInventorySettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryJuiceArgs JuiceArgs;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bWaitForOnlineInventory;
    
    FStartupInventorySettings();
};

