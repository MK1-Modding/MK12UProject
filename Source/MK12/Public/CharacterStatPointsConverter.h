#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "CharacterStatPointsSettings.h"
#include "CharacterTypeInfoEntry.h"
#include "ElementalTypeChart.h"
#include "MKFormulaDataPtr.h"
#include "CharacterStatPointsConverter.generated.h"

UCLASS(Blueprintable)
class MK12_API UCharacterStatPointsConverter : public UDataAsset {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FMKFormulaDataPtr mCharacterStatConverterCurves[5];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FElementalTypeChart mElementalTypeChart;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FCharacterTypeInfoEntry> mCharacterTypeInfo;
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    uint32 mBaseXpReward[8];
    
    UPROPERTY(EditAnywhere, meta=(AllowPrivateAccess=true))
    FCharacterStatPointsSettings mArchetypeStatPointsSettings[8];
    
public:
    UCharacterStatPointsConverter();

};

