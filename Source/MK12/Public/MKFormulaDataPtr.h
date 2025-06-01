#pragma once
#include "CoreMinimal.h"
#include "StructPtrBase.h"
#include "MKFormulaDataPtr.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FMKFormulaDataPtr : public FStructPtrBase {
    GENERATED_BODY()
public:
    FMKFormulaDataPtr();
};

