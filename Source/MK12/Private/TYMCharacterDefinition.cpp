#include "TYMCharacterDefinition.h"

FTYMCharacterDefinition::FTYMCharacterDefinition() {
    this->AnimOverrideType = TYMAnimOverrideType::CharacterSpecific;
    this->mOverrideSpawnDist = 0.00f;
    this->bEnableOverrideSpawnDist = false;
    this->HideUntilStart = false;
    this->SpawnBreakable = false;
    this->HideBreakable = false;
    this->InitializeCharacterScript = false;
}

