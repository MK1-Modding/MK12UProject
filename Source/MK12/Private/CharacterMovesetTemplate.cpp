#include "CharacterMovesetTemplate.h"

ACharacterMovesetTemplate::ACharacterMovesetTemplate(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {
    this->MovesetScript = NULL;
}

void ACharacterMovesetTemplate::ApplyToActor(AMK12GameplaySkeletalActor* DestinationActor) const {
}


