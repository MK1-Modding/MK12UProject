#pragma once
#include "CoreMinimal.h"
#include "HavokClothEntityComponent.h"
#include "DismembermentHavokClothComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class DISMEMBERMENT_API UDismembermentHavokClothComponent : public UHavokClothEntityComponent {
    GENERATED_BODY()
    
public:
    UDismembermentHavokClothComponent(const FObjectInitializer& ObjectInitializer);

};

