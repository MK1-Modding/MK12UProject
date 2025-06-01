#pragma once
#include "CoreMinimal.h"
#include "MKAnnouncerEvent.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;

USTRUCT(BlueprintType)
struct FMKAnnouncerEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UAkSwitchValue* mSwitch;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    float mCutoffTimeInSeconds;
    
    MK12_API FMKAnnouncerEvent();
};

