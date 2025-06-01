#pragma once
#include "CoreMinimal.h"
#include "ESpeechIdentifiers.generated.h"

UENUM()
enum class ESpeechIdentifiers : uint64 {
    Invalid,
    Generic,
    GenericCHA,
    GenericER = 4,
    GenericFEM = 8,
    GenericGOD = 16,
    GenericGUNS = 32,
    GenericGUS = 64,
    GenericHERO = 128,
    GenericHUM = 256,
    GenericLK = 512,
    GenericMAG = 1024,
    GenericMALE = 2048,
    GenericMAS = 4096,
    GenericMON = 8192,
    GenericMOR = 16384,
    GenericNR = 32768,
    GenericOW = 65536,
    GenericRF = 131072,
    GenericSM = 262144,
    GenericTDM = 524288,
    GenericTLK = 1048576,
    GenericTSL = 2097152,
    GenericVIL = 4194304,
    GenericYH = 8388608,
    All = -1,
};

