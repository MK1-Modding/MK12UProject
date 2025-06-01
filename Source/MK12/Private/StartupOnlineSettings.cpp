#include "StartupOnlineSettings.h"

FStartupOnlineSettings::FStartupOnlineSettings() {
    this->Mode = OnlineModeType::None;
    this->StatsType = OnlineStatsType::None;
    this->QuickMatch = false;
    this->UseDebugButtonMasherForLocalPlayer = false;
    this->DisableAutoStart = false;
    this->FastMatchmaking = false;
    this->ReadyUpTimerOverride = 0;
}

