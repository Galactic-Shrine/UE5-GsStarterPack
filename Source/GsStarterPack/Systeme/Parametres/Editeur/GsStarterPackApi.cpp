// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#include "Systeme/Parametres/Editeur/GsStarterPackApi.h"
#include "Containers/UnrealString.h"

/**
 * Contructeur
 */
UGsStarterPackApi::UGsStarterPackApi() {

  /**
   * Information sur l'api du pack
   */
  ApiNom = "<Galactic-Shrine> Starter Pack";
  ApiVersionPrincipale = 0;
  ApiVersionSecondaire = 4;
  ApiRevision = 9;
  ApiSuffixe = "Alpha";

  // On créer un separateur de suffixe
  FString SeparateurDeSuffixe = "-";

  // On créer un tableau
  TArray<FStringFormatArg> Arguments;

  // On argumente le tableau
  Arguments.Add(FStringFormatArg(ApiVersionPrincipale));
  Arguments.Add(FStringFormatArg(ApiVersionSecondaire));
  Arguments.Add(FStringFormatArg(ApiRevision));

  if (ApiSuffixe != "") {

    // On argumente le tableau
    Arguments.Add(FStringFormatArg(SeparateurDeSuffixe));
    Arguments.Add(FStringFormatArg(ApiSuffixe));

    // Affiche le tableau
    ApiVersion = FString::Format(TEXT("{0}.{1}.{2}{3}{4}"), Arguments);
  }
  else
    
    // Affiche le tableau
    ApiVersion = FString::Format(TEXT("{0}.{1}.{2}"), Arguments);


  /**
   * Information sur l'api moteur utiliser sur Ce pack
   */
  MoteurNom = "Unreal Engine";
  MoteurVersion = "5.0";
  MoteurSuffixe = "EarlyAccess";
}
