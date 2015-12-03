// Fill out your copyright notice in the Description page of Project Settings.

using UnrealBuildTool;

public class StarFox : ModuleRules
{
	public StarFox(TargetInfo Target)
	{
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "UMG" });

		PrivateDependencyModuleNames.AddRange(new string[] {"Slate", "SlateCore"  });

	}
}
