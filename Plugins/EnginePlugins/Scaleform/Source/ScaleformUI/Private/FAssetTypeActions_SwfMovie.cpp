#include "FAssetTypeActions_SwfMovie.h"
#include "SwfMovie.h"

FText FAssetTypeActions_SwfMovie::GetName() const
{
	return NSLOCTEXT("AssetTypeActions", "AssetTypeActions_SwfMovie", "SwfMovie");
}

FColor FAssetTypeActions_SwfMovie::GetTypeColor() const
{
	return FColor::Blue; // Example color, customize as needed
}

UClass* FAssetTypeActions_SwfMovie::GetSupportedClass() const
{
	return USwfMovie::StaticClass(); // Ensure this matches your asset class
}

uint32 FAssetTypeActions_SwfMovie::GetCategories()
{
	return EAssetTypeCategories::Misc; // Place in Miscellaneous category
}
