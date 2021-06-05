// � 2019-2021, Galactic-Shrine - Tous droits r�serv�s.

using System;
using System.IO;
using System.Text;
using System.Collections.Generic;
//using Tools.DotNETCommon;
using UnrealBuildTool;

public class GsStarterPack: ModuleRules {

	public GsStarterPack(ReadOnlyTargetRules Target): base(Target) {

    // R�gles du module
    PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

    PublicIncludePaths.AddRange(new string[] {

      // Path.Combine(ModuleDirectory, "Public")
    });

    PrivateIncludePaths.AddRange(new string[] {

      // Path.Combine(ModuleDirectory, "Private")
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

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
		AugmenterLaConstruction(Target);
	}

	/**
	 * Fonction qui incr�mente le num�ro de construction a chaque compilation
	 **/
	private void AugmenterLaConstruction(ReadOnlyTargetRules Target) {

		/**
		 * Chemin d'acc�s � votre dossier source du projet
		 **/
		string CHEMIN = Target.ProjectFile.Directory + "/Source/GsStarterPack/Systeme/";

		/**
		 * Fichier d'en-t�te � modifier
		 */
		const string FICHIER_DE_CONSTRUCTION_DU_JEU = "Construction";

		/**
		 * Texte � remplacer dans le fichier d'en-t�te Construction
		 **/
		const string LIGNE = "#define NUMERO_DE_CONSTRUCTION";

		/**
		 * Encodage du fichier d'en-t�te Construction
		 **/
		Encoding Encodage = Encoding.UTF8; // Encodage.UTF8

		/**
		 * Chemin d'acc�s � votre fichier d'en-t�te Construction
		 **/
		string CheminDeFichierComplet = CHEMIN + FICHIER_DE_CONSTRUCTION_DU_JEU + ".h";

		FileStream FluxDeDonnees = new FileStream(CheminDeFichierComplet, FileMode.Open, FileAccess.Read, FileShare.ReadWrite);
		StreamReader Fichier = new StreamReader(FluxDeDonnees, Encodage, true, 128);

		List<String> LignesDeSortie = new List<String>();
		String LigneUnique = string.Empty;

		/**
		 * On d�terminer si le fichier existe.
		 **/
		while ((LigneUnique = Fichier.ReadLine()) != null) {

			if (LigneUnique.Contains(LIGNE)) {

				string NumeroDeConstructionStr = LigneUnique.Replace(LIGNE, "");
				Int64 NumeroDeConstruction = Int64.Parse(NumeroDeConstructionStr);
				NumeroDeConstruction++;
				LigneUnique = LIGNE + " " + (NumeroDeConstruction.ToString());
			}
			else throw new BuildException(

				"La Funtion [AugmenterLaConstruction] n'a pas r�ussi � obtenir " 
				+ LIGNE 
				+ ". Assurez-vous qu'ils existent dans le fichier d'en-t�te " 
				+ FICHIER_DE_CONSTRUCTION_DU_JEU 
				+ " !"
				);

			LignesDeSortie.Add(LigneUnique);
		}

		File.WriteAllLines(CheminDeFichierComplet, LignesDeSortie.ToArray());
	}
}
