#pragma once
#include "CoreMinimal.h"
#include "ETutorialLooping.h"
#include "StartupTutorialSettings.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FStartupTutorialSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString StartingLessonName;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StartingChapterIndex;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 StartingSubchapterIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSkipInstructionsPopup;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialLooping LoopingMode;
    
    FStartupTutorialSettings();
};

