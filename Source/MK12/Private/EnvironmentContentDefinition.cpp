#include "EnvironmentContentDefinition.h"

UEnvironmentContentDefinition::UEnvironmentContentDefinition() {
    this->mScriptAsset = NULL;
    this->mRegistryFlags = 0;
}

TArray<FName> UEnvironmentContentDefinition::GetAllEnvironmentAssetNames() {
    return TArray<FName>();
}


