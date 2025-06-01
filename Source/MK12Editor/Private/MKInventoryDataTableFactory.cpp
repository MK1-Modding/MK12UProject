// Fill out your copyright notice in the Description page of Project Settings.

#if WITH_EDITOR

#include "MKInventoryDataTableFactory.h"
#include "MKInventoryDataTable.h"

UMKInventoryDataTableFactory::UMKInventoryDataTableFactory()
{
    SupportedClass = UMKInventoryDataTable::StaticClass();
	bCreateNew = true;
	bEditAfterNew = true;
}

UDataTable* UMKInventoryDataTableFactory::MakeNewDataTable(UObject* InParent, FName Name, EObjectFlags Flags)
{
	return NewObject<UMKInventoryDataTable>(InParent, Name, Flags);
}


#endif