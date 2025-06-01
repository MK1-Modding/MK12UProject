#include "MKMusicPlayer.h"
#include "MKAudioComponent.h"

AMKMusicPlayer::AMKMusicPlayer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->mAutoPlayMusicEventAndStates = false;
    this->mMusicEvent = NULL;
    this->mPhaseEvents[0] = NULL;
    this->mPhaseEvents[1] = NULL;
    this->mPhaseEvents[2] = NULL;
    this->mPhaseEvents[3] = NULL;
    this->mAudioComponent = CreateDefaultSubobject<UMKAudioComponent>(TEXT("AudioComponent"));
    this->mCurrentRound = 0;
    this->mCurrentPhaseIntensity = EMusicPhaseIntensity::Low;
    this->mShouldStopFightMusic = true;
    this->mCustomMusicEvent = NULL;
}

void AMKMusicPlayer::StopCurrentMusic(float InFadeOutSeconds) {
}

void AMKMusicPlayer::SetState(UAkStateValue* StateValue) {
}

void AMKMusicPlayer::SetRound(int32 InRound) {
}

void AMKMusicPlayer::SetPhaseIntensity(int32 InIntensity) {
}

void AMKMusicPlayer::SetMusicPlayerStates() {
}

void AMKMusicPlayer::SetMusicEvent(UAkAudioEvent* MusicEvent) {
}

void AMKMusicPlayer::SetCustomMusic(UAkAudioEvent* InMusic) {
}

void AMKMusicPlayer::SetAutoPlayMusicOnMissionPostLoad(bool Value) {
}

void AMKMusicPlayer::PlayMusicEvent() {
}

void AMKMusicPlayer::PlayEvent(UAkAudioEvent* AudioEvent) {
}



























bool AMKMusicPlayer::IsMusicPlaying() const {
    return false;
}

void AMKMusicPlayer::IncrementRound() {
}

void AMKMusicPlayer::IncrementPhaseIntensity() {
}

AMKMusicPlayer* AMKMusicPlayer::GetActiveMusicPlayer(const UObject* WorldContextObject) {
    return NULL;
}

bool AMKMusicPlayer::AutoPlayMusicOnMissionPostLoad() const {
    return false;
}


