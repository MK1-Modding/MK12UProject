#include "StartupReplaySettings.h"

FStartupReplaySettings::FStartupReplaySettings() {
    this->ReplayType = EReplaySelectionType::LatestFile;
    this->IgnoreDesyncs = false;
    this->VersionMismatchBehavior = EReplayVersionMismatchBehavior::Ignore;
}

