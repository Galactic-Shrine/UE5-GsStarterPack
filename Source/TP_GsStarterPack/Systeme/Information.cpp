// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.


#include "../Systeme/Information.h"
#include "../EnTete.h"
#include "Misc/ConfigCacheIni.h" // Donne l'accès au GConfig
#include "Kismet/KismetStringLibrary.h"
#include "Kismet/KismetTextLibrary.h"

/* Le nom de la société (auteur, fournisseur) qui a créé le projet.	*/
void UInformation::NomDeLaSociete(FString& PNomDeLaSociete) {

  PNomDeLaSociete = GetDefault<UGeneralProjectSettings>()->CompanyName;
}

/* Le nom distingué de la société (auteur, fournisseur) qui a créé le projet.	*/
void UInformation::NomDistingueDeLaSociete(FString& PNomDistingueDeLaSociete) {

  PNomDistingueDeLaSociete = GetDefault<UGeneralProjectSettings>()->CompanyDistinguishedName;
}

/* Le nom du projet. */
void UInformation::NomDuProjet(FString& PNomDuProjet) {

  PNomDuProjet = GetDefault<UGeneralProjectSettings>()->ProjectName;
}

/* L'URL de la page d'accueil du projet.*/
void UInformation::PageDaccueil(FString& PPageDaccueil) {

  PPageDaccueil = GetDefault<UGeneralProjectSettings>()->Homepage;
}

/* Les coordonnées des personnes à contacter pour le soutien du projet. */
void UInformation::SupportDeContact(FString& PSupportDeContact) {

  PSupportDeContact = GetDefault<UGeneralProjectSettings>()->SupportContact;
}

/* Les avis de droit d'auteur et/ou de marque du projet. */
void UInformation::DroitDauteur(FString& PDroitDauteur) {

  PDroitDauteur = GetDefault<UGeneralProjectSettings>()->CopyrightNotice;
}

/* Les conditions de licence du projet. */
void UInformation::ConditionsDeLicence(FString& PConditionsDeLicence) {

  PConditionsDeLicence = GetDefault<UGeneralProjectSettings>()->LicensingTerms;
}

/* La politique de confidentialité du projet. */
void UInformation::PolitiqueDeConfidentialite(FString& PPolitiqueDeConfidentialite) {

  PPolitiqueDeConfidentialite = GetDefault<UGeneralProjectSettings>()->PrivacyPolicy;
}

/* Le texte de description du projet. */
void UInformation::Description(FString& PDescription) {

  PDescription = GetDefault<UGeneralProjectSettings>()->Description;
}

/* Nous obtenons la version du projet */
void UInformation::VersionDuJeu(FString& PVersion) {

  PVersion = GetDefault<UGeneralProjectSettings>()->ProjectVersion;
}

/* Nous obtenons le numéro de construction du projet */
void UInformation::NumeroDeConstructionDuJeu(int& PConstruction) {

  PConstruction = NUMERO_DE_CONSTRUCTION;
}

/* L'identifiant unique du projet. */
void UInformation::IdDuProjet(FGuid& PIdDuProjet) {

  PIdDuProjet = GetDefault<UGeneralProjectSettings>()->ProjectID;
}

/**
 * Le titre du projet tel qu'il est affiché sur la barre de titre de la fenêtre
 * (peut inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié)
 **/
void UInformation::TitreAfficheDuProjet(FText& PTitreAfficheDuProjet) {

  PTitreAfficheDuProjet = GetDefault<UGeneralProjectSettings>()->ProjectDisplayedTitle;
}

/**
 * Données supplémentaires à afficher sur la barre de titre de la fenêtre dans les configurations de non-expédition
 * (peuvent inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié)
 **/
void UInformation::InformationsSurLeTitreDuProjetDebug(FText& PInformationsSurLeTitreDuProjetDebug) {

  PInformationsSurLeTitreDuProjetDebug = GetDefault<UGeneralProjectSettings>()->ProjectDebugTitleInfo;
}

/* La fenêtre du jeu doit-elle conserver son aspect ratio lorsqu'elle est redimensionnée par l'utilisateur. */
void UInformation::bLaFenetreDoitElleConserverSonRapportAspect(bool& PbLaFenetreDoitElleConserverSonRapportAspect) {

  PbLaFenetreDoitElleConserverSonRapportAspect = GetDefault<UGeneralProjectSettings>()->bShouldWindowPreserveAspectRatio;
}

/* Le jeu devrait-il utiliser une fenêtre Ardoise sans bordure au lieu d'une fenêtre avec barre de titre et bordure du système */
void UInformation::bUtiliserLaFenetreSansBordure(bool& PbUtiliserLaFenetreSansBordure) {

  PbUtiliserLaFenetreSansBordure = GetDefault<UGeneralProjectSettings>()->bUseBorderlessWindow;
}

/* Si le jeu tente de démarrer en VR, indépendamment du fait que -vr ait été réglé sur la ligne de commande */
void UInformation::bDemarrageEnVR(bool& PbDemarrageEnVR) {

  PbDemarrageEnVR = GetDefault<UGeneralProjectSettings>()->bStartInVR;
}

void UInformation::bAutoriserLaFermeture(bool& PbAutoriserLaFermeture) {

  PbAutoriserLaFermeture = GetDefault<UGeneralProjectSettings>()->bAllowClose;
}

void UInformation::bPermettreDeMaximiser(bool& PbPermettreDeMaximiser) {

  PbPermettreDeMaximiser = GetDefault<UGeneralProjectSettings>()->bAllowMaximize;
}

void UInformation::bPermettreDeReduire(bool& PbPermettreDeReduire) {

  PbPermettreDeReduire = GetDefault<UGeneralProjectSettings>()->bAllowMinimize;
}

void UInformation::bAutoriserLeRedimensionnementDeLaFenetres(bool& PbAutoriserLeRedimensionnementDeLaFenetres) {

  PbAutoriserLeRedimensionnementDeLaFenetres = GetDefault<UGeneralProjectSettings>()->bAllowWindowResize;
}

/* Affiche la version du jeu et son numéro de construction */
void UInformation::AfficherLaVersion(UTextBlock* Target, bool AfficherLeNumeroDeConstruction, const FString& VersionPrefixe, const FString& VersionDuJeu, const FString& VersionSuffixe) {

  const int32& NumeroDeConstruction = NUMERO_DE_CONSTRUCTION;

  TArray<FText> FormatDuTexte;

  FormatDuTexte.SetNum(8, true);
  FormatDuTexte[0] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"39D9A7C44E41F54DE4F30BAC8BC6EA40\", \"{Version Projet}\")"));
  FormatDuTexte[1] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"4FC568AC47EBE0C712C86EA2919DDD13\", \"{Version Prefixe} {Version Projet}\")"));
  FormatDuTexte[2] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"A9182B2A4176E78B7F287FBF0A3B70E2\", \"{Version Prefixe} {Version Projet} {Version Suffixe}\")"));
  FormatDuTexte[3] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"81E3088F4112D85FE80A55A14A263FCF\", \"{Version Projet} {Version Suffixe}\")"));
  FormatDuTexte[4] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"72A2901A4ABF3D2FA0BAA2876DF5EEC6\", \"{Version Projet} ({Numero De Construction})\")"));
  FormatDuTexte[5] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"C40EC975431E7C155F3B41A66A7BA4D1\", \"{Version Prefixe} {Version Projet} ({Numero De Construction})\")"));
  FormatDuTexte[6] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"5C24E6BE44D5CC06116B4D8EB8E69718\", \"{Version Prefixe} {Version Projet} {Version Suffixe} ({Numero De Construction})\")"));
  FormatDuTexte[7] = FTextStringHelper::CreateFromBuffer(TEXT("NSLOCTEXT(\"\", \"631AA33F4842DAE8F344949508F9F39A\", \"{Version Projet} {Version Suffixe} ({Numero De Construction})\")"));

  if (!AfficherLeNumeroDeConstruction) {

    FFormatArgumentData VersionDuJeuArgumentData0;

    TArray<FFormatArgumentData> Tableaux0;

    VersionDuJeuArgumentData0.ArgumentName = FString(TEXT("Version Projet"));
    VersionDuJeuArgumentData0.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);

    Tableaux0.SetNum(1, true);
    Tableaux0[0] = VersionDuJeuArgumentData0;

    if (::IsValid(Target)) {
      Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[0], Tableaux0));
    }

    if (!UKismetStringLibrary::IsEmpty(VersionPrefixe)) {

      FFormatArgumentData VersionPrefixeArgumentData1;
      FFormatArgumentData VersionDuJeuArgumentData1;

      TArray<FFormatArgumentData> Tableaux1;

      VersionPrefixeArgumentData1.ArgumentName = FString(TEXT("Version Prefixe"));
      VersionPrefixeArgumentData1.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionPrefixe);
      VersionDuJeuArgumentData1.ArgumentName = FString(TEXT("Version Projet"));
      VersionDuJeuArgumentData1.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);

      Tableaux1.SetNum(2, true);
      Tableaux1[0] = VersionPrefixeArgumentData1;
      Tableaux1[1] = VersionDuJeuArgumentData1;

      if (::IsValid(Target)) {

        Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[1], Tableaux1));
      }

      if (!UKismetStringLibrary::IsEmpty(VersionSuffixe)) {

        FFormatArgumentData VersionPrefixeArgumentData2;
        FFormatArgumentData VersionDuJeuArgumentData2;
        FFormatArgumentData VersionSuffixeArgumentData2;

        TArray<FFormatArgumentData> Tableaux2;

        VersionPrefixeArgumentData2.ArgumentName = FString(TEXT("Version Prefixe"));
        VersionPrefixeArgumentData2.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionPrefixe);
        VersionDuJeuArgumentData2.ArgumentName = FString(TEXT("Version Projet"));
        VersionDuJeuArgumentData2.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);
        VersionSuffixeArgumentData2.ArgumentName = FString(TEXT("Version Suffixe"));
        VersionSuffixeArgumentData2.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionSuffixe);

        Tableaux2.SetNum(3, true);
        Tableaux2[0] = VersionPrefixeArgumentData2;
        Tableaux2[1] = VersionDuJeuArgumentData2;
        Tableaux2[2] = VersionSuffixeArgumentData2;

        if (::IsValid(Target)) {

          Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[2], Tableaux2));
        }
      }
    }
    else {

      FFormatArgumentData VersionDuJeuArgumentData3;
      FFormatArgumentData VersionSuffixeArgumentData3;

      TArray<FFormatArgumentData> Tableaux3;


      VersionDuJeuArgumentData3.ArgumentName = FString(TEXT("Version Projet"));
      VersionDuJeuArgumentData3.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);
      VersionSuffixeArgumentData3.ArgumentName = FString(TEXT("Version Suffixe"));
      VersionSuffixeArgumentData3.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionSuffixe);

      Tableaux3.SetNum(2, true);
      Tableaux3[0] = VersionDuJeuArgumentData3;
      Tableaux3[1] = VersionSuffixeArgumentData3;

      if (::IsValid(Target)) {

        Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[3], Tableaux3));
      }
    }
  }
  else {

    FFormatArgumentData VersionDuJeuArgumentData4;
    FFormatArgumentData ConstructionArgumentData4;

    TArray<FFormatArgumentData> Tableaux4;

    //FString CONSTRUCTION = NUMERO_DE_CONSTRUCTION;

    VersionDuJeuArgumentData4.ArgumentName = FString(TEXT("Version Projet"));
    VersionDuJeuArgumentData4.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);
    ConstructionArgumentData4.ArgumentName = FString(TEXT("Numero De Construction"));
    ConstructionArgumentData4.ArgumentValue = UKismetTextLibrary::Conv_IntToText(NUMERO_DE_CONSTRUCTION);
    Tableaux4.SetNum(2, true);
    Tableaux4[0] = VersionDuJeuArgumentData4;
    Tableaux4[1] = ConstructionArgumentData4;

    if (::IsValid(Target)) {

      Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[4], Tableaux4));
    }

    if (!UKismetStringLibrary::IsEmpty(VersionPrefixe)) {

      FFormatArgumentData VersionPrefixeArgumentData5;
      FFormatArgumentData VersionDuJeuArgumentData5;
      FFormatArgumentData ConstructionArgumentData5;

      TArray<FFormatArgumentData> Tableaux5;

      VersionPrefixeArgumentData5.ArgumentName = FString(TEXT("Version Prefixe"));
      VersionPrefixeArgumentData5.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionPrefixe);
      VersionDuJeuArgumentData5.ArgumentName = FString(TEXT("Version Projet"));
      VersionDuJeuArgumentData5.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);
      ConstructionArgumentData5.ArgumentName = FString(TEXT("Numero De Construction"));
      ConstructionArgumentData5.ArgumentValue = UKismetTextLibrary::Conv_IntToText(NUMERO_DE_CONSTRUCTION);

      Tableaux5.SetNum(3, true);
      Tableaux5[0] = VersionPrefixeArgumentData5;
      Tableaux5[1] = VersionDuJeuArgumentData5;
      Tableaux5[2] = ConstructionArgumentData5;

      if (::IsValid(Target)) {

        Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[5], Tableaux5));
      }

      if (!UKismetStringLibrary::IsEmpty(VersionSuffixe)) {

        FFormatArgumentData VersionPrefixeArgumentData6;
        FFormatArgumentData VersionDuJeuArgumentData6;
        FFormatArgumentData VersionSuffixeArgumentData6;
        FFormatArgumentData ConstructionArgumentData6;

        TArray<FFormatArgumentData> Tableaux6;

        VersionPrefixeArgumentData6.ArgumentName = FString(TEXT("Version Prefixe"));
        VersionPrefixeArgumentData6.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionPrefixe);
        VersionDuJeuArgumentData6.ArgumentName = FString(TEXT("Version Projet"));
        VersionDuJeuArgumentData6.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);
        VersionSuffixeArgumentData6.ArgumentName = FString(TEXT("Version Suffixe"));
        VersionSuffixeArgumentData6.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionSuffixe);
        ConstructionArgumentData6.ArgumentName = FString(TEXT("Numero De Construction"));
        ConstructionArgumentData6.ArgumentValue = UKismetTextLibrary::Conv_IntToText(NUMERO_DE_CONSTRUCTION);

        Tableaux6.SetNum(4, true);
        Tableaux6[0] = VersionPrefixeArgumentData6;
        Tableaux6[1] = VersionDuJeuArgumentData6;
        Tableaux6[2] = VersionSuffixeArgumentData6;
        Tableaux6[3] = ConstructionArgumentData6;

        if (::IsValid(Target)) {

          Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[6], Tableaux6));
        }
      }
    }
    else {

      FFormatArgumentData VersionDuJeuArgumentData7;
      FFormatArgumentData VersionSuffixeArgumentData7;
      FFormatArgumentData ConstructionArgumentData7;

      TArray<FFormatArgumentData> Tableaux7;


      VersionDuJeuArgumentData7.ArgumentName = FString(TEXT("Version Projet"));
      VersionDuJeuArgumentData7.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionDuJeu);
      VersionSuffixeArgumentData7.ArgumentName = FString(TEXT("Version Suffixe"));
      VersionSuffixeArgumentData7.ArgumentValue = UKismetTextLibrary::Conv_StringToText(VersionSuffixe);
      ConstructionArgumentData7.ArgumentName = FString(TEXT("Numero De Construction"));
      ConstructionArgumentData7.ArgumentValue = UKismetTextLibrary::Conv_IntToText(NUMERO_DE_CONSTRUCTION);

      Tableaux7.SetNum(3, true);
      Tableaux7[0] = VersionDuJeuArgumentData7;
      Tableaux7[1] = VersionSuffixeArgumentData7;
      Tableaux7[2] = ConstructionArgumentData7;

      if (::IsValid(Target)) {

        Target->SetText(UKismetTextLibrary::Format(FormatDuTexte[7], Tableaux7));
      }
    }
  }
}

/* Nous obtenons les paramètres du projet */
void UInformation::ObtenirLesParametresDuProjet(FParametresDeProjet& Parametres) {

  const UGeneralProjectSettings* FParametresDuProjet = GetDefault<UGeneralProjectSettings>();

  if (!FParametresDuProjet) return;

  Parametres = FParametresDeProjet();
  Parametres.NomDeLaSociete = FParametresDuProjet->CompanyName;
  Parametres.NomDistingueDeLaSociete = FParametresDuProjet->CompanyDistinguishedName;
  Parametres.NomDuProjet = FParametresDuProjet->ProjectName;
  Parametres.PageDaccueil = FParametresDuProjet->Homepage;
  Parametres.SupportDeContact = FParametresDuProjet->SupportContact;
  Parametres.DroitDauteur = FParametresDuProjet->CopyrightNotice;
  Parametres.ConditionsDeLicence = FParametresDuProjet->LicensingTerms;
  Parametres.PolitiqueDeConfidentialite = FParametresDuProjet->PrivacyPolicy;
  Parametres.Description = FParametresDuProjet->Description;
  Parametres.VersionDuJeu = FParametresDuProjet->ProjectVersion;
  Parametres.NumeroDeConstructionDuJeu = NUMERO_DE_CONSTRUCTION;
  Parametres.IdDuProjet = FParametresDuProjet->ProjectID;
  Parametres.TitreAfficheDuProjet = FParametresDuProjet->ProjectDisplayedTitle;
  Parametres.InformationsSurLeTitreDuProjetDebug = FParametresDuProjet->ProjectDebugTitleInfo;
  Parametres.bLaFenetreDoitElleConserverSonRapportAspect = FParametresDuProjet->bShouldWindowPreserveAspectRatio;
  Parametres.bUtiliserLaFenetreSansBordure = FParametresDuProjet->bUseBorderlessWindow;
  Parametres.bDemarrageEnVR = FParametresDuProjet->bStartInVR;
  Parametres.bAutoriserLaFermeture = FParametresDuProjet->bAllowClose;
  Parametres.bPermettreDeMaximiser = FParametresDuProjet->bAllowMaximize;
  Parametres.bPermettreDeReduire = FParametresDuProjet->bAllowMinimize;
  Parametres.bAutoriserLeRedimensionnementDeLaFenetres = FParametresDuProjet->bAllowWindowResize;
}
