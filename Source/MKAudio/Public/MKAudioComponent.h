#pragma once
#include "CoreMinimal.h"
#include "AkComponent.h"
#include "MKAudioComponent.generated.h"

class AActor;
class UAkAudioBank;
class UAkAudioEvent;
class UAkSwitchValue;
class UMKAudioComponent;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class MKAUDIO_API UMKAudioComponent : public UAkComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioBank*> mAudioBanks;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkSwitchValue*> mSwitches;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mAutoPlay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mGenerateOverlapEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAkAudioEvent*> mBlueprintAkAudioEvents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bAutoTriggerFoleyEvents;
    
public:
    UMKAudioComponent();

    UFUNCTION(BlueprintCallable)
    void CopySwitchesFromComponent(UMKAudioComponent* AudioComponent);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BlueprintOnPostAkEvent(AActor* Actor, UAkAudioEvent* AudioEvent);
    
};

