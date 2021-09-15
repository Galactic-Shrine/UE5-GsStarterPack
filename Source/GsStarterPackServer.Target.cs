// © 2019-2021, Galactic-Shrine - Tous droits réservés.

using UnrealBuildTool;
using System.Collections.Generic;

public class GsStarterPackServerTarget : TargetRules {
  
  public GsStarterPackServerTarget(TargetInfo Target) : base(Target) {

    Type = TargetType.Server;
    ExtraModuleNames.AddRange(new string[] { "GsStarterPack" });
    DefaultBuildSettings = BuildSettingsVersion.V2;
  }
}