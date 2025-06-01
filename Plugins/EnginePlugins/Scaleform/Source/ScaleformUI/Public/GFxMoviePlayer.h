#pragma once
#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "UObject/NoExportTypes.h"
#include "UObject/NoExportTypes.h"
#include "InputCoreTypes.h"
#include "ASColorTransform.h"
#include "ASDisplayInfo.h"
#include "ASPerspectiveTransform.h"
#include "ASValue.h"
#include "EGFxAlign.h"
#include "EGFxRenderTextureMode.h"
#include "EGFxScaleMode.h"
#include "EGFxTimingMode.h"
#include "ExternalTexture.h"
#include "FsCommandSignatureDelegate.h"
#include "GFxHitTestType.h"
#include "GFxWidgetBinding.h"
#include "OnFocusCommandSignatureDelegate.h"
#include "OnStartCommandSignatureDelegate.h"
#include "OnTickCommandSignatureDelegate.h"
#include "GFxMoviePlayer.generated.h"

class UGFxMoviePlayer;
class UGFxObject;
class USwfMovie;
class UTexture;
class UTextureRenderTarget2D;

UCLASS(Blueprintable)
class SCALEFORMUI_API UGFxMoviePlayer : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString SwfAssetName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UGFxObject* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDisplayWithHudOff: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bEnableGammaCorrection: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bAllowFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCloseOnLevelChange: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bOnlyOwnerFocusable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bDiscardNonOwnerInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureKeyboardInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureMouseInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureGamepadInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bCaptureTouchInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsSplitscreenLayoutModified: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bShowDefaultMouseCursor: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bBlurLesserMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bHideLesserMovies: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPriorityBlurred: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsPriorityHidden: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreVisibilityEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIgnoreBlurEffect: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bRefreshed: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bMouseEventPassthrough: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bPerformHitTest: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<GFxHitTestType::Type> HitTestType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UTextureRenderTarget2D* RenderTexture;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* ExternalInterface;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> CaptureKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FKey> FocusIgnoreKeys;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EGFxRenderTextureMode::Type> RenderTextureMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 Priority;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FGFxWidgetBinding> WidgetBindings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SplitscreenLayoutYAdjust;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFsCommandSignature OnFsCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartCommandSignature OnStartCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnStartCommandSignature OnCloseCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnTickCommandSignature OnTickCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusCommandSignature OnFocusGainedCommand;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnFocusCommandSignature OnFocusLostCommand;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UGFxObject*> CachedMovieClipsArray;
    
public:
    UGFxMoviePlayer();

    UFUNCTION(BlueprintCallable)
    bool Start(bool bRefresh, bool UseSafeZone);
    
    UFUNCTION(BlueprintCallable)
    void SetVisible(bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetVisibility(const FString& MovieClipName, bool bVisible);
    
    UFUNCTION(BlueprintCallable)
    void SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode);
    
    UFUNCTION(BlueprintCallable)
    void SetViewport(int32 X, int32 Y, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    void SetView3D(const FTransform& ViewTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value);
    
    UFUNCTION(BlueprintCallable)
    void SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode);
    
    UFUNCTION(BlueprintCallable)
    void SetScale(const FString& MovieClipName, float XScale, float YScale);
    
    UFUNCTION(BlueprintCallable)
    void SetPosition(const FString& MovieClipName, float X, float Y);
    
    UFUNCTION(BlueprintCallable)
    void SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetPause(bool bPausePlayback);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieCanReceiveInput(bool bCanReceiveInput);
    
    UFUNCTION(BlueprintCallable)
    void SetMovieCanReceiveFocus(bool bCanReceiveFocus);
    
    UFUNCTION(BlueprintCallable)
    void SetFocusIgnoreKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info);
    
    UFUNCTION(BlueprintCallable)
    void SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform);
    
    UFUNCTION(BlueprintCallable)
    void SetCaptureKeys(const TArray<FKey>& Keys);
    
    UFUNCTION(BlueprintCallable)
    void SetAlignment(TEnumAsByte<EGFxAlign::Type> Align);
    
    UFUNCTION(BlueprintCallable)
    void ReceiveGFxCommand(const FString& Command, const FString& Arguments);
    
    UFUNCTION(BlueprintCallable)
    void PushToFront();
    
    UFUNCTION(BlueprintCallable)
    static UGFxMoviePlayer* OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused, bool UseSafeZone);
    
    UFUNCTION(BlueprintCallable)
    void OnTick(float DeltaTime);
    
    UFUNCTION(BlueprintCallable)
    void OnStart();
    
    UFUNCTION(BlueprintCallable)
    void OnFocusLost(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnFocusGained(int32 LocalPlayerIndex);
    
    UFUNCTION(BlueprintCallable)
    void OnClose();
    
    UFUNCTION(BlueprintCallable)
    bool LoadAndStart(const FString& InSwfAssetName, bool bRefresh);
    
    UFUNCTION(BlueprintCallable)
    FASValue Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params);
    
    UFUNCTION(BlueprintCallable)
    void HACK_ResetLastTickTime();
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStopI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndStop(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlayI(const FString& MovieClipName, int32 Frame);
    
    UFUNCTION(BlueprintCallable)
    void GotoAndPlay(const FString& MovieClipName, const FString& Frame);
    
    UFUNCTION(BlueprintCallable)
    bool GetVisibility(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetView3D();
    
    UFUNCTION(BlueprintCallable)
    TArray<FASValue> GetVariableValueArray(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    FASValue GetVariableValue(const FString& MovieClipName, const FString& MemberName);
    
    UFUNCTION(BlueprintCallable)
    bool GetScale(const FString& MovieClipName, float& XScale, float& YScale);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    void GetResolution(FVector2D& Resolution) const;
    
    UFUNCTION(BlueprintCallable)
    bool GetPosition(const FString& MovieClipName, float& X, float& Y);
    
    UFUNCTION(BlueprintCallable)
    FASPerspectiveTransform GetPerspective3D();
    
    UFUNCTION(BlueprintCallable)
    UGFxObject* GetMovieClip(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FTransform GetDisplayTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FASDisplayInfo GetDisplayInfo(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    FASColorTransform GetColorTransform(const FString& MovieClipName);
    
    UFUNCTION(BlueprintCallable)
    void ForceTick();
    
    UFUNCTION(BlueprintCallable)
    void Close(bool Unload);
    
};

