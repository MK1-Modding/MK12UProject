#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "MKAnnouncerEvent.h"
#include "MKAnnouncer.generated.h"

class UAkAudioEvent;
class UAkSwitchValue;
class UMKAssetLibrary;
class UObject;

UCLASS(Abstract, Blueprintable)
class MK12_API AMKAnnouncer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bOverrideVoiceFromSettings;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mAnnouncerEventLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FMKAnnouncerEvent> mEvents;
    
public:
    AMKAnnouncer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static void PlayAnnouncerEvent(UObject* WorldContextObject, UAkAudioEvent* AudioEvent, TArray<UAkSwitchValue*> SwitchValue);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemPause(bool IsPausing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemCleanup(bool AudioPersists);
    
};

