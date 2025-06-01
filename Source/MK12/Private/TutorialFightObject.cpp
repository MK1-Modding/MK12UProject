#include "TutorialFightObject.h"

UTutorialFightObject::UTutorialFightObject() {
    this->mMatchWinConditions.AddDefaulted(1);
    this->mInfiniteTimer = true;
    this->mCheckForFirstHit = false;
}


