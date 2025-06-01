// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "MirrorComponent.generated.h"


class USkeleton;
class UWMirrorTable;


UCLASS(Blueprintable, EditInlineNew, ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class MIRRORING_API UMirrorComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	UMirrorComponent();

private:
	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool bMirror;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool bLastMirrorState;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		bool bMirrorStateChangedThisTick;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bComponentsMirrorWithAttachParent;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		TMap<USkeleton*, UWMirrorTable*> MirrorTableMap;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (AllowPrivateAccess = true))
		bool bAllowAssetCustomization;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta = (AllowPrivateAccess = true))
		FTransform WorldMirrorTransform;
		
};
