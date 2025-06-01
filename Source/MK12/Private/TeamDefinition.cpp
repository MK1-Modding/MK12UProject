#include "TeamDefinition.h"

FTeamDefinition::FTeamDefinition() {
    this->mType = ETeamType::Default;
    this->mStartupFlags = 0;
    this->mLeftSideTeam = TeamNum::Team1;
}

