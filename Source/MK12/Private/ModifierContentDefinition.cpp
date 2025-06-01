#include "ModifierContentDefinition.h"

UModifierContentDefinition::UModifierContentDefinition() {
    this->mRequiredMissionComponent = NULL;
    this->mIgnoredPauseReasons = 0;
    this->mEnabled = true;
    this->mIsSoakable = true;
}

TArray<FName> UModifierContentDefinition::GetAllModifierPrimaryAssetIds() {
    return TArray<FName>();
}


