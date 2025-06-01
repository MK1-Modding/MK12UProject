// Fill out your copyright notice in the Description page of Project Settings.

#pragma once
#include "CoreMinimal.h"
#include "MKButton.generated.h"

UENUM()
enum class MKButton : uint32 {
    None,
    DPadUp,
    DPadDown,
    DPadLeft = 4,
    DPadRight = 8,
    RUp = 16,
    RDown = 32,
    RLeft = 64,
    RRight = 128,
    Start = 256,
    Back = 512,
    LeftThumb = 1024,
    RightThumb = 2048,
    LeftShoulder = 4096,
    RightShoulder = 8192,
    LeftTrigger = 16384,
    RightTrigger = 32768,
    RightStickUp = 65536,
    RightStickDown = 131072,
    RightStickLeft = 262144,
    RightStickRight = 524288,
    AnalogConversion = 1048576,
    DPadUpNLeft = 2097152,
    DPadUpNRight = 4194304,
    DPadDownNLeft = 8388608,
    DPadDownNRight = 16777216,
    DPadDownAnalog = 1048578,
    DPadUpAnalog = 1048577,
    DPadRightAnalog = 1048584,
    DPadLeftAnalog = 1048580,
    DPadUpNLeftAnalog = 3145728,
    DPadUpNRightAnalog = 5242880,
    DPadDownNLeftAnalog = 9437184,
    DPadDownNRightAnalog = 17825792,
    RThumb_LR = 786432,
    LeftAndRightShoulders = 12288,
    AllFaceButtons = 240,
    AllFaceShoulderTriggerThumbButtons = 64752,
    AllDPadCardinals = 15,
    AllDPadDiagonals = 31457280,
    AllDPadButtons = 31457295,
    AllRightStickCardinals = 983040,
    AllRightStickAny = 985088,
    AllStandardButtons = 1048575,
    FirstButton = DPadUp,
};


