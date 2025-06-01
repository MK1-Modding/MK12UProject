#include "GFxMoviePlayer.h"

UGFxMoviePlayer::UGFxMoviePlayer() {
    this->Root = NULL;
    this->bDisplayWithHudOff = true;
    this->bEnableGammaCorrection = false;
    this->bAllowInput = true;
    this->bAllowFocus = true;
    this->bCloseOnLevelChange = false;
    this->bOnlyOwnerFocusable = false;
    this->bDiscardNonOwnerInput = false;
    this->bCaptureKeyboardInput = true;
    this->bCaptureMouseInput = true;
    this->bCaptureGamepadInput = true;
    this->bCaptureTouchInput = true;
    this->bIsSplitscreenLayoutModified = false;
    this->bShowDefaultMouseCursor = true;
    this->bBlurLesserMovies = false;
    this->bHideLesserMovies = false;
    this->bIsPriorityBlurred = false;
    this->bIsPriorityHidden = false;
    this->bIgnoreVisibilityEffect = false;
    this->bIgnoreBlurEffect = false;
    this->bRefreshed = false;
    this->bMouseEventPassthrough = false;
    this->bPerformHitTest = false;
    this->HitTestType = GFxHitTestType::HitTest_Bounds;
    this->RenderTexture = NULL;
    this->ExternalInterface = NULL;
    this->RenderTextureMode = EGFxRenderTextureMode::Opaque;
    this->Priority = 0;
    this->SplitscreenLayoutYAdjust = 0;
}

bool UGFxMoviePlayer::Start(bool bRefresh, bool UseSafeZone) {
    return false;
}

void UGFxMoviePlayer::SetVisible(bool bVisible) {
}

void UGFxMoviePlayer::SetVisibility(const FString& MovieClipName, bool bVisible) {
}

void UGFxMoviePlayer::SetViewScaleMode(TEnumAsByte<EGFxScaleMode::Type> ScaleMode) {
}

void UGFxMoviePlayer::SetViewport(int32 X, int32 Y, int32 Width, int32 Height) {
}

void UGFxMoviePlayer::SetView3D(const FTransform& ViewTransform) {
}

void UGFxMoviePlayer::SetVariableValueArray(const FString& MovieClipName, const FString& MemberName, const TArray<FASValue>& Value) {
}

void UGFxMoviePlayer::SetVariableValue(const FString& MovieClipName, const FString& MemberName, const FASValue& Value) {
}

void UGFxMoviePlayer::SetTimingMode(TEnumAsByte<EGFxTimingMode::Type> TimingMode) {
}

void UGFxMoviePlayer::SetScale(const FString& MovieClipName, float XScale, float YScale) {
}

void UGFxMoviePlayer::SetPosition(const FString& MovieClipName, float X, float Y) {
}

void UGFxMoviePlayer::SetPerspective3D(const FASPerspectiveTransform& PerspectiveTransform) {
}

void UGFxMoviePlayer::SetPause(bool bPausePlayback) {
}

void UGFxMoviePlayer::SetMovieCanReceiveInput(bool bCanReceiveInput) {
}

void UGFxMoviePlayer::SetMovieCanReceiveFocus(bool bCanReceiveFocus) {
}

void UGFxMoviePlayer::SetFocusIgnoreKeys(const TArray<FKey>& Keys) {
}

void UGFxMoviePlayer::SetDisplayTransform(const FString& MovieClipName, const FTransform& DisplayTransform) {
}

void UGFxMoviePlayer::SetDisplayInfo(const FString& MovieClipName, const FASDisplayInfo& Info) {
}

void UGFxMoviePlayer::SetColorTransform(const FString& MovieClipName, const FASColorTransform& UnrealColorTransform) {
}

void UGFxMoviePlayer::SetCaptureKeys(const TArray<FKey>& Keys) {
}

void UGFxMoviePlayer::SetAlignment(TEnumAsByte<EGFxAlign::Type> Align) {
}

void UGFxMoviePlayer::ReceiveGFxCommand(const FString& Command, const FString& Arguments) {
}

void UGFxMoviePlayer::PushToFront() {
}

UGFxMoviePlayer* UGFxMoviePlayer::OpenMovie(USwfMovie* SwfMovie, UObject* ExternalScriptInterface, UTextureRenderTarget2D* RenderToTexture, UGFxMoviePlayer* MoviePlayer, bool DisplayWithHudOff, bool StartPaused, bool UseSafeZone) {
    return NULL;
}

void UGFxMoviePlayer::OnTick(float DeltaTime) {
}

void UGFxMoviePlayer::OnStart() {
}

void UGFxMoviePlayer::OnFocusLost(int32 LocalPlayerIndex) {
}

void UGFxMoviePlayer::OnFocusGained(int32 LocalPlayerIndex) {
}

void UGFxMoviePlayer::OnClose() {
}

bool UGFxMoviePlayer::LoadAndStart(const FString& InSwfAssetName, bool bRefresh) {
    return false;
}

FASValue UGFxMoviePlayer::Invoke(const FString& MovieClipName, const FString& FunctionName, const TArray<FASValue>& Params) {
    return FASValue{};
}

void UGFxMoviePlayer::HACK_ResetLastTickTime() {
}

void UGFxMoviePlayer::GotoAndStopI(const FString& MovieClipName, int32 Frame) {
}

void UGFxMoviePlayer::GotoAndStop(const FString& MovieClipName, const FString& Frame) {
}

void UGFxMoviePlayer::GotoAndPlayI(const FString& MovieClipName, int32 Frame) {
}

void UGFxMoviePlayer::GotoAndPlay(const FString& MovieClipName, const FString& Frame) {
}

bool UGFxMoviePlayer::GetVisibility(const FString& MovieClipName) {
    return false;
}

FTransform UGFxMoviePlayer::GetView3D() {
    return FTransform{};
}

TArray<FASValue> UGFxMoviePlayer::GetVariableValueArray(const FString& MovieClipName, const FString& MemberName) {
    return TArray<FASValue>();
}

FASValue UGFxMoviePlayer::GetVariableValue(const FString& MovieClipName, const FString& MemberName) {
    return FASValue{};
}

bool UGFxMoviePlayer::GetScale(const FString& MovieClipName, float& XScale, float& YScale) {
    return false;
}

void UGFxMoviePlayer::GetResolution(FVector2D& Resolution) const {
}

bool UGFxMoviePlayer::GetPosition(const FString& MovieClipName, float& X, float& Y) {
    return false;
}

FASPerspectiveTransform UGFxMoviePlayer::GetPerspective3D() {
    return FASPerspectiveTransform{};
}

UGFxObject* UGFxMoviePlayer::GetMovieClip(const FString& MovieClipName) {
    return NULL;
}

FTransform UGFxMoviePlayer::GetDisplayTransform(const FString& MovieClipName) {
    return FTransform{};
}

FASDisplayInfo UGFxMoviePlayer::GetDisplayInfo(const FString& MovieClipName) {
    return FASDisplayInfo{};
}

FASColorTransform UGFxMoviePlayer::GetColorTransform(const FString& MovieClipName) {
    return FASColorTransform{};
}

void UGFxMoviePlayer::ForceTick() {
}

void UGFxMoviePlayer::Close(bool Unload) {
}


