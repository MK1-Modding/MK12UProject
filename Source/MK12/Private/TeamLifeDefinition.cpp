#include "TeamLifeDefinition.h"

FTeamLifeDefinition::FTeamLifeDefinition() {
    this->mRoundResetType = LifeResetType::ResetEveryRound;
    this->mStartingLifePercentage = 0.00f;
    this->mMaxLifePercentage = 0.00f;
}

