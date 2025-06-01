#include "PopulateSwfRawData.h"
#include "Misc/FileHelper.h"
#include "Misc/Paths.h"

bool UPopulateSwfRawData::LoadRawDataFromFile(USwfMovie* SwfMovie, const FString& FilePath)
{
	if (!SwfMovie)
	{
		UE_LOG(LogTemp, Error, TEXT("SwfMovie asset is null!"));
		return false;
	}

	// Load the file into a byte array
	TArray<uint8> FileData;
	if (FFileHelper::LoadFileToArray(FileData, *FilePath))
	{
		// Assign the binary data to RawData
		SwfMovie->RawData = FileData;

		// Mark the asset as modified so it can be saved
		SwfMovie->MarkPackageDirty();

		UE_LOG(LogTemp, Log, TEXT("Successfully loaded SWF file into RawData: %s"), *FilePath);
		return true;
	}
	else
	{
		// Log failure to read the file
		UE_LOG(LogTemp, Error, TEXT("Failed to load SWF file: %s"), *FilePath);
		return false;
	}
}
