#include "CustomDroneSetting.h"

FCustomDroneSetting::FCustomDroneSetting() {
    this->mBlockMode = EBlockMode::BLOCK_OFF;
    this->mBlockType = EBlockType::BLOCKTYPE_NORMAL;
    this->mMovementMode = EDroneMovementMode::MOVE_STAND;
    this->mThrowEscapeMode = EDroneThrowEscapeMode::THROW_ESCAPE_OFF;
    this->mBreakerMode = EDroneBreakerMode::BREAKER_OFF;
    this->mWakeupMode = EDroneWakeupMode::WAKEUP_OFF;
    this->bSpecificGetupAttack = false;
    this->mWakeupDelayMode = EDroneWakeupDelayMode::OFF;
    this->mReversalMode = EDroneReversalMode::REVERSAL_OFF;
    this->bSpecificReversalAttack = false;
}

