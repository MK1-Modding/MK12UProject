#include "StolenPropAssetUserData.h"
#include "Templates/SubclassOf.h"

UStolenPropAssetUserData::UStolenPropAssetUserData() {
    this->PaletteTexture = NULL;
    this->SourceActorClass = NULL;
    this->NumInstances = 0;
}

void UStolenPropAssetUserData::StealProp(AMK12GameplaySkeletalActor* DestinationActor, TSubclassOf<AMK12GameplaySkeletalActor> NewSourceActorClass, const TArray<TSoftClassPtr<UMKGameplaySkeletalActorOverride>>& Overrides) {
}

void UStolenPropAssetUserData::RemoveStolenProps(AMK12GameplaySkeletalActor* DestinationActor, TSubclassOf<AMK12GameplaySkeletalActor> RemovedActorClass, bool ReinitializeEntity) {
}


