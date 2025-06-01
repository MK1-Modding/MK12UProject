#include "StartupOnlineKothSettings.h"

FStartupOnlineKothSettings::FStartupOnlineKothSettings() {
    this->MatchType = EKothMatchType::Standard;
    this->AutoSpectator = false;
    this->DisableRespectVoteTimeout = false;
    this->DisableRespectVote = false;
    this->KeepPlayerListVisible = false;
    this->StressTests = KothStressTest::None;
}

