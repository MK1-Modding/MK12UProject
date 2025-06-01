#include "CharacterContentDefinition.h"

UCharacterContentDefinition::UCharacterContentDefinition() {
    this->mBaseHitPoints = 700.00f;
    this->mCharacterStatPointsConverter = NULL;
    this->mOverrideBaseXpReward = 0;
}

TArray<FName> UCharacterContentDefinition::GetValidCharacterTypes() const {
    return TArray<FName>();
}


