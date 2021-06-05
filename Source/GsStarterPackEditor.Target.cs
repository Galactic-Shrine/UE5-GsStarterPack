// © 2019-2021, Galactic-Shrine - Tous droits réservés.

using UnrealBuildTool;
using System.Collections.Generic;

public class GsStarterPackEditorTarget : TargetRules {

	public GsStarterPackEditorTarget( TargetInfo Target) : base(Target) {

		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange( new string[] { "GsStarterPack" } );
	}
}
