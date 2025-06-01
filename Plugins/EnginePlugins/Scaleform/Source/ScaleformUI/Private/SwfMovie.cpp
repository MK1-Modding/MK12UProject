#include "SwfMovie.h"
#include "AssetRegistry/AssetRegistryModule.h"

USwfMovie::USwfMovie() {
    //this->bUseInputArgumentsString = false;
    this->bUseGFxExport = false;
   //this->bOptimizeForMobiles = false;
    //this->bSetSRGBOnImportedTextures = false;
    this->bPackTextures = false;
    this->PackTextureSize = 0;
    //this->bForceSquarePacking = false;
    this->TextureRescale = FlashTextureScale_High;
    //this->bReplaceImages = false;
    //this->ImportTimeStamp = 0;
    //this->RuntimePlatformOverride = NULL;
}