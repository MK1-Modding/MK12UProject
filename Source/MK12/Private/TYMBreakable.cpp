#include "TYMBreakable.h"

ATYMBreakable::ATYMBreakable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->SpawnBehavior = BreakableSpawnBehavior::Tightrope;
    this->BreakableDefinitions.AddDefaulted(1);
}






