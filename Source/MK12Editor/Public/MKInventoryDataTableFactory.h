// Fill out your copyright notice in the Description page of Project Settings.

#if WITH_EDITOR

#pragma once

#include "CoreMinimal.h"
#include "Factories/DataTableFactory.h"
#include "MKInventoryDataTable.h"
#include "MKInventoryDataTableFactory.generated.h"

/**
 * 
 */
UCLASS()
class MK12EDITOR_API UMKInventoryDataTableFactory : public UDataTableFactory
{
	GENERATED_BODY()
	
public:
	UMKInventoryDataTableFactory();

protected:
	virtual UDataTable* MakeNewDataTable(UObject* InParent, FName Name, EObjectFlags Flags) override;
};


#endif