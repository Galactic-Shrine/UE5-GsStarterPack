// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GeneralProjectSettings.h" // Nécessite le module EngineSettings
#include "Components/TextBlock.h"
#include "Information.generated.h"

USTRUCT(BlueprintType)
/* Struture de Parametres De Projet */
struct FParametresDeProjet {

  //GENERATED_UCLASS_BODY()
  GENERATED_BODY()

  UPROPERTY(BlueprintReadOnly, Category = "Éditeur")
  /* Le nom de la société (auteur, fournisseur) qui a créé le projet. */
  FString NomDeLaSociete;

  UPROPERTY(BlueprintReadOnly, Category = "Éditeur")
  /* Le nom distingué de la société (auteur, fournisseur) qui a créé le projet. */
  FString NomDistingueDeLaSociete;

  UPROPERTY(BlueprintReadOnly, Category = "À propos")
  /* Le nom du projet. */
  FString NomDuProjet;

  UPROPERTY(BlueprintReadOnly, Category = "Éditeur")
  /* L'URL de la page d'accueil du projet.*/
  FString PageDaccueil;

  UPROPERTY(BlueprintReadOnly, Category = "Éditeur")
  /* Les coordonnées des personnes à contacter pour le soutien du projet. */
  FString SupportDeContact;

  UPROPERTY(BlueprintReadOnly, Category = "Juridique")
  /* Les avis de droit d'auteur et/ou de marque du projet. */
  FString DroitDauteur;

  UPROPERTY(BlueprintReadOnly, Category = "Juridique")
  /* Les conditions de licence du projet. */
  FString ConditionsDeLicence;

  UPROPERTY(BlueprintReadOnly, Category = "Juridique")
  /* La politique de confidentialité du projet. */
  FString PolitiqueDeConfidentialite;

  UPROPERTY(BlueprintReadOnly, Category = "À propos")
  /* Le texte de description du projet. */
  FString Description;

  UPROPERTY(BlueprintReadOnly, Category = "À propos")
  /* Le numéro de version du projet. */
  FString VersionDuJeu;

  UPROPERTY(BlueprintReadOnly, Category = "À propos")
  /* Le numéro de construction du projet. */
  int NumeroDeConstructionDuJeu;

  UPROPERTY(BlueprintReadOnly, Category = "À propos")
  /* L'identifiant unique du projet. */
  FGuid IdDuProjet;

  UPROPERTY(BlueprintReadOnly, Category = "Affiché")
  /* Le titre du projet tel qu'il est affiché sur la barre de titre de la fenêtre (peut inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié) */
  FText TitreAfficheDuProjet;

  UPROPERTY(BlueprintReadOnly, Category = "Affiché")
  /* Données supplémentaires à afficher sur la barre de titre de la fenêtre dans les configurations de non-expédition (peuvent inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié) */
  FText InformationsSurLeTitreDuProjetDebug;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  /* La fenêtre du jeu doit-elle conserver son aspect ratio lorsqu'elle est redimensionnée par l'utilisateur. */
  bool bLaFenetreDoitElleConserverSonRapportAspect;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  /* Le jeu devrait-il utiliser une fenêtre Ardoise sans bordure au lieu d'une fenêtre avec barre de titre et bordure du système */
  bool bUtiliserLaFenetreSansBordure;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  /* Si le jeu tente de démarrer en VR, indépendamment du fait que -vr ait été réglé sur la ligne de commande */
  bool bDemarrageEnVR;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  bool bAutoriserLaFermeture;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  bool bPermettreDeMaximiser;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  bool bPermettreDeReduire;

  UPROPERTY(BlueprintReadOnly, Category = "Paramètres")
  bool bAutoriserLeRedimensionnementDeLaFenetres;
};

/**
 * Class pour recupere les information du GeneralProjectSettings
 */
UCLASS()
class TP_GSSTARTERPACK_API UInformation : public UBlueprintFunctionLibrary {

	GENERATED_BODY()

public:
  /**
   * Le nom de la société (auteur, fournisseur) qui a créé le projet.
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Nom de la société",
    CompactNodeTitle = "NomDeLaSociete",
    Tooltip = "Permet d'obtenir le nom de la société (auteur, fournisseur) qui a créé le projet.",
    Category = "# GalacticShrine|InformationSystem|Éditeur"
    ))
  static void NomDeLaSociete(FString& PNomDeLaSociete);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Nom distingué de la société",
    CompactNodeTitle = "NomDistingueDeLaSociete",
    Tooltip = "Permet d'obtenir le nom distingué de la société (auteur, fournisseur) qui a créé le projet.",
    Category = "# GalacticShrine|InformationSystem|Éditeur"
    ))
  /* Le nom distingué de la société (auteur, fournisseur) qui a créé le projet. */
  static void NomDistingueDeLaSociete(FString& PNomDistingueDeLaSociete);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Nom du projet",
    CompactNodeTitle = "NomDuProjet",
    Tooltip = "Permet d'obtenir le nom du projet.",
    Category = "# GalacticShrine|InformationSystem|À propos"
    ))
  /* Le nom du projet. */
  static void NomDuProjet(FString& PNomDuProjet);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Page d'accueil",
    CompactNodeTitle = "PageDaccueil",
    Tooltip = "Permet d'obtenir l'url de la page d'accueil du projet.",
    Category = "# GalacticShrine|InformationSystem|Éditeur"
    ))
  /* L'URL de la page d'accueil du projet.*/
  static void PageDaccueil(FString& PPageDaccueil);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Support de contact",
    CompactNodeTitle = "SupportDeContact",
    Tooltip = "Permet d'obtenir les coordonnées des personnes à contacter pour le soutien du projet.",
    Category = "# GalacticShrine|InformationSystem|Éditeur"
    ))
  /* Les coordonnées des personnes à contacter pour le soutien du projet. */
  static void SupportDeContact(FString& PSupportDeContact);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Droit d'auteur",
    CompactNodeTitle = "DroitDauteur",
    Tooltip = "Permet d'obtenir les avis de droit d'auteur et/ou de marque du projet.",
    Category = "# GalacticShrine|InformationSystem|Juridique"
    ))
  /* Les avis de droit d'auteur et/ou de marque du projet. */
  static void DroitDauteur(FString& PDroitDauteur);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Conditions de licence",
    CompactNodeTitle = "ConditionsDeLicence",
    Tooltip = "Permet d'obtenir les conditions de licence du projet.",
    Category = "# GalacticShrine|InformationSystem|Juridique"
    ))
  /* Les conditions de licence du projet. */
  static void ConditionsDeLicence(FString& PConditionsDeLicence);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Politique de confidentialite",
    CompactNodeTitle = "PolitiqueDeConfidentialite",
    Tooltip = "Permet d'obtenir la politique de confidentialité du projet.",
    Category = "# GalacticShrine|InformationSystem|Juridique"
    ))
  /* La politique de confidentialité du projet. */
  static void PolitiqueDeConfidentialite(FString& PPolitiqueDeConfidentialite);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Description",
    CompactNodeTitle = "Description",
    Tooltip = "Permet d'obtenir la description du projet.",
    Category = "# GalacticShrine|InformationSystem|À propos"
    ))
  /* Le texte de description du projet. */
  static void Description(FString& PDescription);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Version du jeu",
    CompactNodeTitle = "VersionDuJeu",
    Tooltip = "Permet d'obtenir la version du projet.",
    Category = "# GalacticShrine|InformationSystem|À propos"
    ))
  /* Nous obtenons la version du projet */
  static void VersionDuJeu(FString& PVersion);

public:
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Numéro de construction du jeu",
    CompactNodeTitle = "NumeroDeConstructionDuJeu",
    Tooltip = "Permet d'obtenir le numéro de construction du projet.",
    Category = "# GalacticShrine|InformationSystem|À propos"
    ))
  /* Nous obtenons le numéro de construction du projet */
  static void NumeroDeConstructionDuJeu(int& PConstruction);

  /**
   * L'identifiant unique du projet.
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Id du projet",
    CompactNodeTitle = "IdDuProjet",
    Tooltip = "Permet d'obtenir l'identifiant unique du projet.",
    Category = "# GalacticShrine|InformationSystem|À propos"
    ))
  static void IdDuProjet(FGuid& PIdDuProjet);

  /**
   * Le titre du projet tel qu'il est affiché sur la barre de titre de la fenêtre
   * (peut inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié)
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Titre affiche du projet",
    CompactNodeTitle = "TitreAfficheDuProjet",
    Tooltip = "Permet d'obtenir le titre du projet tel qu'il est affiché sur la barre de titre de la fenêtre (peut inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié).",
    Category = "# GalacticShrine|InformationSystem|Affiché"
    ))
  static void TitreAfficheDuProjet(FText& PTitreAfficheDuProjet);

  /**
   * Données supplémentaires à afficher sur la barre de titre de la fenêtre dans les configurations de non-expédition
   * (peuvent inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié)
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "Informations sur le titre du projet debug",
    CompactNodeTitle = "InformationsSurLeTitreDuProjetDebug",
    Tooltip = "Permet d'obtenir les onnées supplémentaires à afficher sur la barre de titre de la fenêtre dans les configurations de non-expédition (peuvent inclure les jetons {GameName}, {PlatformArchitecture}, {BuildConfiguration} ou {RHIName}, qui seront remplacés par le texte spécifié).",
    Category = "# GalacticShrine|InformationSystem|Affiché"
    ))
  static void InformationsSurLeTitreDuProjetDebug(FText& PInformationsSurLeTitreDuProjetDebug);

  /**
   * La fenêtre du jeu doit-elle conserver son aspect ratio lorsqu'elle est redimensionnée par l'utilisateur.
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool La fenêtre doit elle conserver son rapport aspect",
    CompactNodeTitle = "bLaFenetreDoitElleConserverSonRapportAspect",
    Tooltip = "Permet d'obtenir la fenêtre du jeu doit-elle conserver son aspect ratio lorsqu'elle est redimensionnée par l'utilisateur.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bLaFenetreDoitElleConserverSonRapportAspect(bool& PbLaFenetreDoitElleConserverSonRapportAspect);

  /**
   * Le jeu devrait-il utiliser une fenêtre Ardoise sans bordure au lieu d'une fenêtre avec barre de titre et bordure du système
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool Utiliser la fenêtre sans bordure",
    CompactNodeTitle = "bUtiliserLaFenetreSansBordure",
    Tooltip = "Permet d'obtenir si le jeu devrait-il utiliser une fenêtre Ardoise sans bordure au lieu d'une fenêtre avec barre de titre et bordure du système.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bUtiliserLaFenetreSansBordure(bool& PbUtiliserLaFenetreSansBordure);

  /**
   * Si le jeu tente de démarrer en VR, indépendamment du fait que -vr ait été réglé sur la ligne de commande
   **/
  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool Démarrage en VR",
    CompactNodeTitle = "bDemarrageEnVR",
    Tooltip = "Permet d'obtenir si le jeu tente de démarrer en VR, indépendamment du fait que -vr ait été réglé sur la ligne de commande.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bDemarrageEnVR(bool& PbDemarrageEnVR);

  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool Autoriser La fermeture",
    CompactNodeTitle = "bAutoriserLaFermeture",
    Tooltip = "Permet d'autoriser la fermeture.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bAutoriserLaFermeture(bool& PbAutoriserLaFermeture);

  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool Permettre de maximiser",
    CompactNodeTitle = "bPermettreDeMaximiser",
    Tooltip = "Permet de maximiser le jeu.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bPermettreDeMaximiser(bool& PbPermettreDeMaximiser);

  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool Permettre de reduire",
    CompactNodeTitle = "bPermettreDeReduire",
    Tooltip = "Permet de reduire le jeu.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bPermettreDeReduire(bool& PbPermettreDeReduire);

  UFUNCTION(BlueprintPure, meta = (
    DisplayName = "bool Autoriser le redimensionnement de la fenêtre",
    CompactNodeTitle = "bAutoriserLeRedimensionnementDeLaFenetres",
    Tooltip = "Permet d'autoriser le redimensionnement de la fenêtre.",
    Category = "# GalacticShrine|InformationSystem|Paramètres"
    ))
  static void bAutoriserLeRedimensionnementDeLaFenetres(bool& PbAutoriserLeRedimensionnementDeLaFenetres);

  /**
   * Affiche la version du jeu et son numéro de construction
   **/
  UFUNCTION(BlueprintCallable, meta = (
    DisplayName = "Afficher La Version",
    Tooltip = "Affiche la version du jeu et son numéro de construction.",
    Category = "# GalacticShrine|InformationSystem|Affiché"
    ))
  static void AfficherLaVersion(UTextBlock* Target, bool AfficherLeNumeroDeConstruction, const FString& VersionPrefixe, const FString& VersionDuJeu, const FString& VersionSuffixe);

  /**
   * Nous obtenons les paramètres du projet
   **/
  UFUNCTION(BlueprintCallable, meta = (
    DisplayName = "Obtenir les paramètres du projet",
    Tooltip = "Permet d'obtenir les paramètres du projet",
    Category = "# GalacticShrine|InformationSystem"
    ))
  static void ObtenirLesParametresDuProjet(FParametresDeProjet& Parametres);

};
