// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class The_Interned : ModuleRules
{
	public The_Interned(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput" });
	}
}
