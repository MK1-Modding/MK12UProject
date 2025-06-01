#pragma once
#include "CoreMinimal.h"
#include "UISettingsScreen.generated.h"

class UObject;

USTRUCT(BlueprintType)
struct MK12_API FUISettingsScreen {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UObject* mSettingsScreenAsset;
    
public:
    FUISettingsScreen();
};

