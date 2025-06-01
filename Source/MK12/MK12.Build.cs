// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class MK12 : ModuleRules
{
	public MK12(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		
		bUseRTTI = false;
		
		PublicDefinitions.Add("USE_RTTI=0");
	
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HierarchicalAnimation", "NRSActor", "NRSEngine", "Uppercut", "MKAnim", "Mirroring", "MaterialOverrides", "WAnimationMirroringRuntime", "MKInput", "MKLootTable", "Gridly", "LevelSequence", "Dismemberment", "AkAudio", "MKInventory", "MKCamera", "MKAudio", "NRSDecals" });

		PrivateDependencyModuleNames.AddRange(new string[] {  });
		
		if (Target.bBuildEditor)
		{
			PrivateDependencyModuleNames.Add("MK12Editor");
		}

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });
		
		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
