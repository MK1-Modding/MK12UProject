#pragma once
#include "CoreMinimal.h"
#include "MKAudioSlomoMixerState.h"
#include "MKAudioMixer.generated.h"

class UAkStateValue;

UCLASS(Abstract, Blueprintable)
class MKAUDIO_API AMKAudioMixer : public AActor {
    GENERATED_BODY()
public:
    AMKAudioMixer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    static void SetUnpauseState(UAkStateValue* UnpauseState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetSystemSlomoState(MKAudioSlomoMixerState SlomoState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemPause(bool IsPausing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemCleanup(bool AudioPersists);
    
    UFUNCTION(BlueprintCallable)
    static UAkStateValue* GetUnpauseState();
    
};

