#pragma once
#include "CoreMinimal.h"
#include "CharacterStatPointsSettings.generated.h"

USTRUCT(BlueprintType)
struct FCharacterStatPointsSettings {
    GENERATED_BODY()

protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InitialAutoStatPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 InitialUserStatPoints;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 AutoStatPointsPerLevel;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 UserStatPointsPerLevel;
    
public:
    MK12_API FCharacterStatPointsSettings();
};

