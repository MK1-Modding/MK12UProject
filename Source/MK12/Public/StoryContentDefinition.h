#pragma once
#include "CoreMinimal.h"
#include "MKInventoryItemDefinitionReferencer.h"
#include "ContentDefinition.h"
#include "StoryContentDefinition.generated.h"

class UDataTable;

UCLASS(Blueprintable)
class MK12_API UStoryContentDefinition : public UContentDefinition, public IMKInventoryItemDefinitionReferencer {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mDataTable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDataTable* mDataTableLite;
    
public:
    UStoryContentDefinition();


    // Fix for true pure virtual functions not being implemented
};

