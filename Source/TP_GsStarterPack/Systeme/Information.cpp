// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.


#include "../Systeme/Information.h"
#include "../EnTete.h"
#include "Misc/ConfigCacheIni.h" // Donne l'accès au GConfig

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

/* Le titre du projet tel qu'il est affiché sur la barre de titre de la fenêtre (peut inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié) */
void UInformation::TitreAfficheDuProjet(FText& PTitreAfficheDuProjet) {

  PTitreAfficheDuProjet = GetDefault<UGeneralProjectSettings>()->ProjectDisplayedTitle;
}

/* Données supplémentaires à afficher sur la barre de titre de la fenêtre dans les configurations de non-expédition (peuvent inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié) */
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
