#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GCReference.h"
#include "GFxEngine.generated.h"

UCLASS(Blueprintable, MinimalAPI, Transient)
class UGFxEngine : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGCReference> GCReferences;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 RefCount;
    
    UGFxEngine();

};

