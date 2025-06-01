#pragma once
#include "CoreMinimal.h"
#include "UIPauseMenuComponent.h"
#include "UIFightingPauseMenuComponent.generated.h"

class UUIMovelist;

UCLASS(Blueprintable, Config=Engine)
class MK12_API UUIFightingPauseMenuComponent : public UUIPauseMenuComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UUIMovelist> mMovelistScreenClass;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UUIMovelist* mCachedMovelistScreenInstance;
    
public:
    UUIFightingPauseMenuComponent();

};

