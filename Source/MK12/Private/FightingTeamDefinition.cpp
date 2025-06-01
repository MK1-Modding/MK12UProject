#include "FightingTeamDefinition.h"
#include "KameoTeamComposition.h"

UFightingTeamDefinition::UFightingTeamDefinition() {
    this->mTeamComposition = CreateDefaultSubobject<UDEPRECATED_KameoTeamComposition>(TEXT("TeamComposition"));
    this->bTeamCritEnabled = false;
    this->mStartingSuperMeter = 0.00f;
    this->bOverrideStartingSuperMeter = false;
    this->mStartupFlags = 0;
}


