#pragma once
#include "CoreMinimal.h"
#include "MKInventoryDataTableRowHandle.h"
#include "MKInventoryItemDefinition.h"
#include "MKInventoryItemDefinitionGroupWithAsset.h"
#include "ColorPaletteSwatch.h"
#include "MK12CharacterSkinItemDefinition.generated.h"

class AMKCharacterActor;
class UMKGameplaySkeletalActorOverride;

USTRUCT(BlueprintType)
struct MK12_API FMK12CharacterSkinItemDefinition : public FMKInventoryItemDefinition {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryDataTableRowHandle Character;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMKCharacterActor> Asset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKInventoryItemDefinitionGroupWithAsset AssetGroup;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMKGameplaySkeletalActorOverride> Palette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<AMKCharacterActor> AltAsset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSoftClassPtr<UMKGameplaySkeletalActorOverride> AltPalette;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHasColorPaletteSwatchOverride;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FColorPaletteSwatch ColorPaletteSwatch;
    
public:
    FMK12CharacterSkinItemDefinition();
};

