// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class MK12Editor : ModuleRules
{
	public MK12Editor(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		bUseRTTI = false;
		
		PublicDefinitions.Add("USE_RTTI=0");
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UnrealEd", "MKInventory", "NRSEngine" });

		PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore", "EditorStyle", "PropertyEditor", "AssetTools" });

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
