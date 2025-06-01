// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MKGameplaySkeletalActorClassOverride.h"
#include "MKGameplaySkeletalActorObjectOverride.h"
#include "MKGameplaySkeletalActorOverride.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class MK12_API UMKGameplaySkeletalActorOverride : public UObject {
	GENERATED_BODY()
public:
protected:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FMKGameplaySkeletalActorClassOverride> ClassOverrides;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TArray<FMKGameplaySkeletalActorObjectOverride> ObjectOverrides;

public:
	UMKGameplaySkeletalActorOverride();

	UFUNCTION(BlueprintCallable)
		void SetObjectOverride(FName Name, UObject* Object);

	UFUNCTION(BlueprintCallable)
		void SetClassOverride(FName Name, UClass* Class);

};
