#pragma once
#include "CoreMinimal.h"
#include "ContentDefinition.h"
#include "MapModeEnvironmentContentDefinition.generated.h"

class UTexture2D;
class UWorld;

UCLASS(Blueprintable)
class MK12_API UMapModeEnvironmentContentDefinition : public UContentDefinition {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UWorld> mWorld;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIMesaSelectImage;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftObjectPtr<UTexture2D> mUIMesaSelectFocusImage;
    
public:
    UMapModeEnvironmentContentDefinition();

};

