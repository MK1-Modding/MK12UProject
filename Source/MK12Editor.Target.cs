// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;
using System.Collections.Generic;

public class MK12EditorTarget : TargetRules
{
	public MK12EditorTarget(TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		
		WindowsPlatform.Compiler = WindowsCompiler.VisualStudio2022;

		ExtraModuleNames.AddRange( new string[] { "MK12" } );
	}
}
