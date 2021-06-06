// © 2019-2021, Galactic-Shrine - All rights reserved.

using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
//using Tools.DotNETCommon;
using UnrealBuildTool;

public class GsStarterPack: ModuleRules {

  public GsStarterPack(ReadOnlyTargetRules Target): base(Target) {

    /**
     * Module rules
     **/
    PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

    /**
     * Include paths
     * 
     * <example>
     *  Public Paths
     *  <code>
        PublicIncludePaths.AddRange(new string[] {

          "Public" Or Path.Combine(ModuleDirectory, "Public")
        });
     *  </code>
     * 
     *  Private Paths
     *  <code>
        PrivateIncludePaths.AddRange(new string[] {

          "Private" Or Path.Combine(ModuleDirectory, "Private")
        });
     *  </code>
     * </example>
     * 
     **/
    PublicIncludePaths.AddRange(new string[] {
      "GsStarterPack"
      // Path.Combine(ModuleDirectory, "Public")
    });


    PublicDependencyModuleNames.AddRange(new string[] {

      "Core",
      "CoreUObject",
      "Engine",
      "InputCore",
      "HeadMountedDisplay",
      "UMG",
      "UnrealEd"
    });

    PrivateDependencyModuleNames.AddRange(new string[] {

      "Core",
      "CoreUObject",
      "Engine",
      "InputCore",
      "Slate",
      "SlateCore",
      "EngineSettings",
      "UnrealEd"
    });

    DynamicallyLoadedModuleNames.AddRange(new string[] {

    });

    IncreaseBuild(Target);
  }

  /**
   * Function that increments the construction number at each compilation
   **/
  private void IncreaseBuild(ReadOnlyTargetRules Target) {

    /**
     * Path to your project source folder
     **/
    string PATH = Target.ProjectFile.Directory + "/Source/GsStarterPack/System/";

    /**
     * Header file to be modified
     */
    const string GAME_BUILDING_FILE = "Build";

    /**
     * Text to replace in the build header file
     **/
    const string LINE = "#define BUILD_NUMBER";

    /**
     * Encoding of the header file build
     **/
    Encoding Encoding = Encoding.UTF8;

    /**
     * Path to your build header file
     **/
    string FullFilePath = PATH + GAME_BUILDING_FILE + ".h";

    FileStream DataStream = new FileStream(FullFilePath, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
    StreamReader BuildFile = new StreamReader(DataStream, Encoding, true, 128);

    List<String> OutputLines = new List<String>();
    String SingleLine = string.Empty;

    /**
     * We determine if the file exists.
     **/
    while ((SingleLine = BuildFile.ReadLine()) != null) {

      if (SingleLine.Contains(LINE)) {

        string BuildNumberStr = SingleLine.Replace(LINE, "");
        Int64 BuildNumber = Int64.Parse(BuildNumberStr);
        BuildNumber++;
        SingleLine = LINE + " " + (BuildNumber.ToString());
      }
      else throw new BuildException(

        "The [IncreaseBuild] Funtion failed to get "
        + LINE
        + ". Make sure they exist in the header file "
        + GAME_BUILDING_FILE
        + " !"
        );

      OutputLines.Add(SingleLine);
    }

    File.WriteAllLines(FullFilePath, OutputLines.ToArray());
  }
}
