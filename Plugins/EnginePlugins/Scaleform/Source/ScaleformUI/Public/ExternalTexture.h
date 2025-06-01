#pragma once
#include "CoreMinimal.h"
#include "ExternalTexture.generated.h"

class UTexture;

USTRUCT(BlueprintType)
struct FExternalTexture {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Resource;
};

