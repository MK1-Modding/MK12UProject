#include "MissionRecordingConfiguration.h"

FMissionRecordingConfiguration::FMissionRecordingConfiguration() {
    this->RecordingState = MissionRecordingState::Disabled;
    this->UploadState = MissionRecordingUploadState::Disabled;
}

