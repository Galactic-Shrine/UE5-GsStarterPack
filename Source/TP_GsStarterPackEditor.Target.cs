// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.
// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;
using System;
using System.IO;
using System.Collections.Generic;
using System.Text.RegularExpressions;
using System.Globalization;

public class TP_GsStarterPackEditorTarget : TargetRules
{
	public TP_GsStarterPackEditorTarget( TargetInfo Target) : base(Target)
	{
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V5;
		IncludeOrderVersion = EngineIncludeOrderVersion.Unreal5_4;
		ExtraModuleNames.Add("TP_GsStarterPack");

    // Vérification de l'existence du fichier de projet
    // Check if the project file is defined
    if(ProjectFile == null) {
      throw new BuildException("Aucun fichier de projet défini");
    }

    string buildMarkerFile = Path.Combine(ProjectFile.Directory.FullName, ".LastBuildMarker");
    string currentBuildIdentifier = DateTime.Now.ToString("yyyyMMddHHmmss");

    // Vérifiez si le build a déjà été traité et s'il n'a pas eu lieu il y a moins d'une minute
    if(File.Exists(buildMarkerFile)) {

      string lastBuildIdentifier = File.ReadAllText(buildMarkerFile);
      DateTime lastBuildTime;

      if(DateTime.TryParseExact(lastBuildIdentifier, "yyyyMMddHHmmss", CultureInfo.InvariantCulture, DateTimeStyles.None, out lastBuildTime)) {

        TimeSpan timeDifference = DateTime.Now - lastBuildTime;
        if(timeDifference < TimeSpan.FromMinutes(1)) {

          Console.WriteLine("Le build a déjà été traité il y a moins d'une minute.");
          return;
        }
      }
    }

    // Mettez à jour le fichier marqueur pour indiquer que le build a été traité
    File.WriteAllText(buildMarkerFile, currentBuildIdentifier);

    // Nom du fichier d'en-tête à modifier
    // Name of the header file to be modified
    string FichierDeConstructionDuJeu = "EnTete";
    // Chemin absolu vers le répertoire source du projet
    // Absolute path to the project's source directory
    string dossierProjet = Path.Combine(ProjectFile.Directory.FullName, "Source", this.Name.Replace(oldValue: "Editor", newValue: ""));
    // Chemin absolu vers le fichier d'en-tête
    // Absolute path to the header file
    string fichierConstruction = Path.Combine(dossierProjet, $"{FichierDeConstructionDuJeu}.h");
    // Texte à remplacer dans le fichier d'en-tête
    // Text to replace in the header file
    const string texteDefinitionNumeroConstruction = "#define NUMERO_DE_CONSTRUCTION";

    // Afficher des informations sur le processus de génération du numéro de construction
    // Display information about the build number generation process
    Console.WriteLine("------ Génération de numéro de construction ------");
    Console.WriteLine($"------ Vérifier que le fichier {FichierDeConstructionDuJeu}.h existe ------");
    // Vérification de l'existence du fichier d'en-tête
    // Check if the header file exists
    if(!File.Exists(fichierConstruction)) {
      throw new BuildException($"Impossible de trouver {FichierDeConstructionDuJeu}.h. Assurez-vous qu'il existe !");
    }

    // Ouverture du fichier d'en-tête pour modification
    // Opening the header file for modification
    Console.WriteLine($"------ Ouverture du fichier d'en-tête -> {fichierConstruction} ------");
    FileInfo infoFichierConstruction = new FileInfo(fichierConstruction);
    infoFichierConstruction.IsReadOnly = false;

    // Lecture du contenu du fichier d'en-tête
    // Reading the content of the header file
    string contenuFichierConstruction = File.ReadAllText(fichierConstruction);
    int numeroConstruction = 0;

    // Extraction du numéro de construction depuis le fichier d'en-tête
    // Extracting the build number from the header file
    Match correspondance = Regex.Match(contenuFichierConstruction, $"{texteDefinitionNumeroConstruction}\\s+(\\d+)");
    if(correspondance.Success) {

      // Si une correspondance est trouvée, incrémenter le numéro de construction
      // If a match is found, increment the build number
      numeroConstruction = int.Parse(correspondance.Groups[1].Value);
      numeroConstruction++;
      contenuFichierConstruction = Regex.Replace(contenuFichierConstruction, $"{texteDefinitionNumeroConstruction}\\s+\\d+", $"{texteDefinitionNumeroConstruction} {numeroConstruction}");
      Console.WriteLine($"------ Génération d'un nouveau numéro de construction -> {numeroConstruction} ------");
    }
    else {

      // Si aucune correspondance n'est trouvée, lever une exception
      // If no match is found, throw an exception
      throw new BuildException($"Le fichier {FichierDeConstructionDuJeu}.h ne contient pas la ligne \"{texteDefinitionNumeroConstruction}\"");
    }

    // Écrire le nouveau contenu dans le fichier d'en-tête
    // Writing the new content to the header file
    File.WriteAllText(fichierConstruction, contenuFichierConstruction);
  }
}
