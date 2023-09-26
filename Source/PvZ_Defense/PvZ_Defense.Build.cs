// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class PvZ_Defense : ModuleRules
{
	public PvZ_Defense(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
