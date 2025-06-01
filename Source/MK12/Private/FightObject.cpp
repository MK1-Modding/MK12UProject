#include "FightObject.h"

UFightObject::UFightObject() {
    this->mCurrentFightTimerFrames = 0;
    this->bRoundStartChoreoPlayed = false;
    this->bFirstHitOccurred = false;
    this->mMatchWinConditions.AddDefaulted(2);
    this->mRoundWinConditions.AddDefaulted(2);
    this->mRoundsToWin[0] = 2;
    this->mRoundsToWin[1] = 2;
    this->mFightTimerInSeconds = 90;
    this->mInfiniteTimer = false;
    this->mCheckForFirstHit = true;
    this->mSuperMoveCooldownEnabled = true;
    this->mSuperMoveDamageBoostEnabled = true;
    this->mSuperMoveArmorEnabled = false;
    this->AnyKeyForAttractMode = false;
}


