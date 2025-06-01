#pragma once
#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "UIGenericPauseSettingsComponent.generated.h"

class UUIGenericSettings;

UCLASS(Blueprintable, Config=Game)
class MK12_API UUIGenericPauseSettingsComponent : public UMissionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUIGenericSettings> mGenericSettingsScreenClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIGenericSettings* mCachedVoiceSettingsInstance;
    
public:
    UUIGenericPauseSettingsComponent();

};

