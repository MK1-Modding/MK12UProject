#include "MKInventoryDataTable.h"

UMKInventoryDataTable::UMKInventoryDataTable() {
    this->bIsNetworkRelevant = true;
    this->DisplayIndex = -1;
}

TMap<FName, FMKInventoryItemDefinition> UMKInventoryDataTable::GetDefinitionMap() const {
    return TMap<FName, FMKInventoryItemDefinition>();
}