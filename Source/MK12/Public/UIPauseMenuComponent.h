#pragma once
#include "CoreMinimal.h"
#include "MissionComponent.h"
#include "UIPauseMenuComponent.generated.h"

class UUIPauseMenuDriver;

UCLASS(Abstract, Blueprintable, Config=Game)
class MK12_API UUIPauseMenuComponent : public UMissionComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUIPauseMenuDriver> mPauseMenuScreenClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIPauseMenuDriver* mCachedPauseMenuScreenInstance;
    
public:
    UUIPauseMenuComponent();

};

