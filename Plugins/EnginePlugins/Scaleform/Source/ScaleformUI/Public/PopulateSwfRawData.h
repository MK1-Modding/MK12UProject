#pragma once

#include "CoreMinimal.h"
#include "SwfMovie.h" // Include your SwfMovie asset class
#include "PopulateSwfRawData.generated.h"

/**
 * Utility class for populating the RawData property of SwfMovie assets.
 */
UCLASS()
class SCALEFORMUI_API UPopulateSwfRawData : public UObject
{
	GENERATED_BODY()

public:
	/**
	 * Loads binary data from a SWF file into the RawData property of a SwfMovie asset.
	 * @param SwfMovie - The SwfMovie asset to populate.
	 * @param FilePath - The full file path to the SWF file.
	 * @return True if the data was successfully loaded, false otherwise.
	 */
	UFUNCTION(BlueprintCallable, Category = "SwfMovie")
		static bool LoadRawDataFromFile(USwfMovie* SwfMovie, const FString& FilePath);
};
