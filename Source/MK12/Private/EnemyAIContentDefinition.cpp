#include "EnemyAIContentDefinition.h"

UEnemyAIContentDefinition::UEnemyAIContentDefinition() {
    this->mEnemyArchetype = EEnemyArchetype::Grunt;
    this->mCompatibleKameoCharacterAsset = NULL;
    this->mDronePersonality = EDronePersonalityType::ScriptedEncounter;
}

TArray<FName> UEnemyAIContentDefinition::GetAllKameoAssetNames() {
    return TArray<FName>();
}


