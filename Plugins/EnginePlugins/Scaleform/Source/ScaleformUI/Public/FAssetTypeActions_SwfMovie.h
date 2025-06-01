#pragma once

#include "CoreMinimal.h"
#include "AssetTypeActions_Base.h"

class FAssetTypeActions_SwfMovie : public FAssetTypeActions_Base
{
public:
	// Constructor (can be empty)
	FAssetTypeActions_SwfMovie() {}

	// Override methods from FAssetTypeActions_Base
	virtual FText GetName() const override;
	virtual FColor GetTypeColor() const override;
	virtual UClass* GetSupportedClass() const override;
	virtual uint32 GetCategories() override;
};
