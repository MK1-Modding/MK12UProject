#include "StartupFightConfiguration.h"

FStartupFightConfiguration::FStartupFightConfiguration() {
    this->bInstantMatchWinTeam = TeamNum::Team1;
    this->bInstantRoundWinTeam = TeamNum::Team1;
    this->mNumberOfRounds = 0;
    this->bEnableNumberOfRounds = false;
    this->mLeftSideTeam = TeamNum::Team1;
    this->mAttackingTeam = TeamNum::Team1;
    this->bSkipFightIntro = false;
    this->bForceInMatchClash = false;
    this->bSkipFinishHim = false;
    this->bHideFightHUD = false;
    this->bSkipVictories = false;
    this->bDisableBrutalities = false;
    this->StartingTimer = EStartingTimer::InfiniteTimer;
    this->bForceLoadQuitality = false;
}

