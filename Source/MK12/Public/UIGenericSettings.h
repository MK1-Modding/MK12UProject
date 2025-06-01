#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UIPauseSubMenu.h"
#include "UIGenericSettings.generated.h"

class UUISettingsDriver;

UCLASS(Abstract, Blueprintable)
class MK12_API UUIGenericSettings : public UUIPauseSubMenu {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UUISettingsDriver> mGenericSettingsScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUISettingsDriver* mGenericSettingsScreenInst;
    
public:
    UUIGenericSettings();

};

