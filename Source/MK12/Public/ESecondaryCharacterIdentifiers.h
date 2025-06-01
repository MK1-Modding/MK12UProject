#pragma once
#include "CoreMinimal.h"
#include "ESecondaryCharacterIdentifiers.generated.h"

UENUM()
enum class ESecondaryCharacterIdentifiers : uint64 {
    None,
    ErrorMacro = 2,
    Vought = 4,
    Supe = 8,
    KombatKousin = 16,
    CyberNinja = 32,
    Chaotic = 64,
    Wraith = 128,
    Slasher = 256,
    MovieBuff = 512,
    Cimmerian = 1024,
    Barbarian = 2048,
    Destroyer = 4096,
    Realms = None,
    Factions = 8190,
    Races = None,
    All = -1,
};

