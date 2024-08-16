// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#include "../../Systeme/Editeur/GsStarterPackApi.h"
#include "../../EnTete.h"

/**
 * Contructeur
 */
UGsStarterPackApi::UGsStarterPackApi() {

  /**
   * Information sur l'api du pack
   */
  ApiNom = "<Galactic-Shrine> Starter Pack";
  ApiVersionPrincipale = GS_MAJOR_VERSION;
  ApiVersionSecondaire = GS_MINOR_VERSION;
  ApiRevision = GS_PATCH_VERSION;
  ApiSuffixe = GS_RELEASE_NAME;

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
  MoteurNom = EPIC_PRODUCT_NAME;
  MoteurVersion = ENGINE_VERSION_STRING_SHORT;
}
