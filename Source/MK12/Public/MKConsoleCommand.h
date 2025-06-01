#pragma once
#include "CoreMinimal.h"
#include "MKConsoleCommand.generated.h"

USTRUCT(BlueprintType)
struct FMKConsoleCommand {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString mCommand;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bEnabled;
    
    MK12_API FMKConsoleCommand();
};

