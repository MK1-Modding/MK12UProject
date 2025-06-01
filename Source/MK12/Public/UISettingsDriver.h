#pragma once
#include "CoreMinimal.h"
#include "UISettingsScreen.h"
#include "UISettingsDriver.generated.h"

UCLASS(Abstract, Blueprintable)
class MK12_API UUISettingsDriver : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUISettingsScreen mSettingsScreen;
    
public:
    UUISettingsDriver();

};

