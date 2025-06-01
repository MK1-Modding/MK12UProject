#pragma once
#include "CoreMinimal.h"
#include "ContentDefinition.h"
#include "UIFightHUDContentDefinition.generated.h"

class UMKAssetLibrary;

UCLASS(Blueprintable)
class UUIFightHUDContentDefinition : public UContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mAssetLibrary;
    
public:
    UUIFightHUDContentDefinition();

};

