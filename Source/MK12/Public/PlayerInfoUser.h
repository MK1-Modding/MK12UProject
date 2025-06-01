#pragma once
#include "CoreMinimal.h"
#include "UserConfigurationSettings.h"
#include "PlayerInfoUser.generated.h"

USTRUCT(BlueprintType)
struct MK12_API FPlayerInfoUser {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FUserConfigurationSettings mSettings;
    
public:
    FPlayerInfoUser();
};

