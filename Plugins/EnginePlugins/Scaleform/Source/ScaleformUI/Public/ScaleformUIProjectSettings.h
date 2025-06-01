#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Engine/EngineTypes.h"
#include "ScaleformUIProjectSettings.generated.h"

UCLASS(Blueprintable, DefaultConfig, Config=Game)
class SCALEFORMUI_API UScaleformUIProjectSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bUseDefinedLocationForSharedMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDirectoryPath SharedMoviesRootLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FString> PlatformSpecificSharedMovies;
    
    UScaleformUIProjectSettings();

};

