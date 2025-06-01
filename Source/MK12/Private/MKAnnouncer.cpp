#include "MKAnnouncer.h"

AMKAnnouncer::AMKAnnouncer(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->bOverrideVoiceFromSettings = true;
    this->mAnnouncerEventLibrary = NULL;
}

void AMKAnnouncer::PlayAnnouncerEvent(UObject* WorldContextObject, UAkAudioEvent* AudioEvent, TArray<UAkSwitchValue*> SwitchValue) {
}




