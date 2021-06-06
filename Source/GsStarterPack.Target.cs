// © 2019-2021, Galactic-Shrine - All rights reserved.

using UnrealBuildTool;
using System.Collections.Generic;

public class GsStarterPackTarget : TargetRules {

  public GsStarterPackTarget( TargetInfo Target) : base(Target) {

    Type = TargetType.Game;
    DefaultBuildSettings = BuildSettingsVersion.V2;
    ExtraModuleNames.AddRange( new string[] { "GsStarterPack" } );
  }
}
