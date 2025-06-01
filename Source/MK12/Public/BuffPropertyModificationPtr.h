#pragma once
#include "CoreMinimal.h"
#include "StructPtrBase.h"
#include "BuffPropertyModificationPtr.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FBuffPropertyModificationPtr : public FStructPtrBase {
    GENERATED_BODY()
public:
    FBuffPropertyModificationPtr();
};

