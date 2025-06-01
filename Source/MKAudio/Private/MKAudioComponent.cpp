#include "MKAudioComponent.h"

UMKAudioComponent::UMKAudioComponent() {
    this->mAutoPlay = false;
    this->mGenerateOverlapEvents = false;
    this->bAutoTriggerFoleyEvents = false;
}

void UMKAudioComponent::CopySwitchesFromComponent(UMKAudioComponent* AudioComponent) {
}



