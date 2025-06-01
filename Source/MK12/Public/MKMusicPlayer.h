#pragma once
#include "CoreMinimal.h"
#include "Actor.h"
#include "EMusicPhaseIntensity.h"
#include "MKMusicPlayer.generated.h"

class AMKMusicPlayer;
class UAkAudioEvent;
class UAkStateValue;
class UMKAudioComponent;
class UObject;

UCLASS(Abstract, Blueprintable)
class MK12_API AMKMusicPlayer : public AActor {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> mMissionStates;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> mStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    bool mAutoPlayMusicEventAndStates;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mMusicEvent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TArray<UAkStateValue*> mRoundStates;
    
    UPROPERTY(EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mPhaseEvents[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, NoClear, meta=(AllowPrivateAccess=true))
    UMKAudioComponent* mAudioComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 mCurrentRound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMusicPhaseIntensity mCurrentPhaseIntensity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool mShouldStopFightMusic;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAkAudioEvent* mCustomMusicEvent;
    
public:
    AMKMusicPlayer(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable)
    void StopCurrentMusic(float InFadeOutSeconds);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetState(UAkStateValue* StateValue);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetRound(int32 InRound);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPhaseIntensity(int32 InIntensity);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetMusicPlayerStates();
    
    UFUNCTION(BlueprintCallable)
    void SetMusicEvent(UAkAudioEvent* MusicEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetCustomMusic(UAkAudioEvent* InMusic);
    
    UFUNCTION(BlueprintCallable)
    void SetAutoPlayMusicOnMissionPostLoad(bool Value);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayMusicEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlayEvent(UAkAudioEvent* AudioEvent);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnVictoryFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemPause(bool IsPausing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSystemCleanup(bool AudioPersists);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnStoryMusicStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnSecretFightStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundEnded();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRoundChoreographyStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnResetForPractice();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRealtimeStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnPreRenderStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMusicEndedOrMarkerHit();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionPostLoad();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnMissionEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKlassicTowerBossFinisherSequenceStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnKlassicTowerBossFinisherSequenceFinished();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinishEmStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFinalRoundEvent();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFightStart();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFightEnd();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnFatalityStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnDarkenBackground();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCharacterIntrosStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAnnouncerFight();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool IsMusicPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void IncrementRound();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void IncrementPhaseIntensity();
    
    UFUNCTION(BlueprintCallable, meta=(WorldContext="WorldContextObject"))
    static AMKMusicPlayer* GetActiveMusicPlayer(const UObject* WorldContextObject);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic, BlueprintPure)
    bool AutoPlayMusicOnMissionPostLoad() const;
    
};

