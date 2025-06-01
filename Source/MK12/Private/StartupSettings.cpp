#include "StartupSettings.h"

FStartupSettings::FStartupSettings() {
    this->StartupMode = EStartupMode::Attract;
    this->GlobalFlags = 0;
    this->mScrollerFilterFlags = 0;
    this->DebugRollbackState = EDebugStartupRollbackState::MissionDefault;
    this->AllowAttractModeTimeout = false;
    this->AlwaysShowEULAScreen = false;
    this->ForceShowFTUE = false;
    this->ForceNotShowFTUE = false;
    this->UseTeamSettingsForAttract = false;
    this->TutorialLessonMissionClass = NULL;
    this->UseBackgroundDefinitionForPIE = false;
    this->MissionRandSeed = 0;
}

