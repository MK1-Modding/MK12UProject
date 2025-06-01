#include "StartupTutorialSettings.h"

FStartupTutorialSettings::FStartupTutorialSettings() {
    this->StartingChapterIndex = 0;
    this->StartingSubchapterIndex = 0;
    this->bSkipInstructionsPopup = false;
    this->LoopingMode = ETutorialLooping::None;
}

