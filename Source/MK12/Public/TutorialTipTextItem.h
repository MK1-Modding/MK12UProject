#pragma once
#include "CoreMinimal.h"
#include "TutorialTipTextItem.generated.h"

USTRUCT(BlueprintType)
struct FTutorialTipTextItem {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Text;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float DisplayTimerSeconds;
    
    MK12_API FTutorialTipTextItem();
};

