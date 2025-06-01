#pragma once
#include "CoreMinimal.h"
#include "ETutorialCharacterPauseSection.h"
#include "TutorialCharacterPauseComponent.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FTutorialCharacterPauseComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 TicksUntilCharacterPause;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ETutorialCharacterPauseSection CharacterPauseSection;
    
public:
    FTutorialCharacterPauseComponent();
};

