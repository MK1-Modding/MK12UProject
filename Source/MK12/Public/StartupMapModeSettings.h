#pragma once
#include "CoreMinimal.h"
#include "CharacterDefinition.h"
#include "EMapModeNodeType.h"
#include "KameoCharacterDefinition.h"
#include "MK12MapModeBackgroundDefinition.h"
#include "MainCharacterDefinition.h"
#include "StartupMapModeSettings.generated.h"

USTRUCT(BlueprintType)
struct FStartupMapModeSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDefinition CharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterDefinition KameoDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMainCharacterDefinition MainCharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FKameoCharacterDefinition KameoCharacterDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMK12MapModeBackgroundDefinition BackgroundDefinition;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMapModeNodeType StartingNodeType;
    
private:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint64 DebugFlags;
    
public:
    MK12_API FStartupMapModeSettings();
};

