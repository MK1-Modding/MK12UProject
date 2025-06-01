#pragma once
#include "CoreMinimal.h"
#include "EElementalType.h"
#include "ElementalDebuffInfo.h"
#include "MissionComponent.h"
#include "ElementalDebuffManager.generated.h"

class UMKScriptAsset;

UCLASS(Blueprintable, Config=Game)
class UElementalDebuffManager : public UMissionComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<EElementalType, FElementalDebuffInfo> mElementalDebuffMap;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UMKScriptAsset> mCommonScriptAsset;
    
public:
    UElementalDebuffManager();

};

