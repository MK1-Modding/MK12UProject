// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MK12Target : TargetRules
{
	public MK12Target(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		
		WindowsPlatform.Compiler = WindowsCompiler.VisualStudio2022;

		ExtraModuleNames.AddRange( new string[] { "MK12" } );
	}
}
