#include "FightWinInstance.h"

FFightWinInstance::FFightWinInstance() {
    this->mApplicableTeams = ETeamNumSelector::Team1;
    this->mTieGameResolution = ETieGameResolution::RandomWinner;
    this->mPriority = 0;
}

