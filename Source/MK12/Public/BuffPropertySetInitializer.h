#pragma once
#include "CoreMinimal.h"
#include "BuffPropertyModificationPtr.h"
#include "Templates/SubclassOf.h"
#include "BuffPropertySetInitializer.generated.h"

class UBuffPropertySet;

USTRUCT(BlueprintType)
struct MK12_API FBuffPropertySetInitializer {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UBuffPropertySet> PropertySetClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBuffPropertyModificationPtr> Defaults;
    
public:
    FBuffPropertySetInitializer();
};

