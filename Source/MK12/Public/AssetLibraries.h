#pragma once
#include "CoreMinimal.h"
#include "AssetLibraries.generated.h"

class UMKAssetLibrary;

USTRUCT(BlueprintType)
struct MK12_API FAssetLibraries {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mNavAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mGetupAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mDefeatGetupAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mEndOfRoundAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mCharacterSelectAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mCharacterCinemaAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mDismembermentPropsLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mKustomizeCharacterAssetLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mTYMAnimLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mTalismanAnimLibrary;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMKAssetLibrary* mCh15Cinemas;
    
    FAssetLibraries();
};

