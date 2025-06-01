#include "TutorialCharacterPauseComponent.h"

FTutorialCharacterPauseComponent::FTutorialCharacterPauseComponent() {
    this->TicksUntilCharacterPause = 0;
    this->CharacterPauseSection = ETutorialCharacterPauseSection::None;
}

