// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GsStarterPackApi.generated.h"

/**
 * Information sur le pack utiliser sur ce projet
 */
UCLASS(config = Game, meta = (DisplayName = "<Galactic-Shrine> Starter Pack API"))
class TP_GSSTARTERPACK_API UGsStarterPackApi : public UDeveloperSettings {

	GENERATED_BODY()
	
  /**
   * Contructeur
   */
  UGsStarterPackApi();

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Nom",
    Tooltip = "Nom du pack utilisé",
    Category = API
    ))
  FString ApiNom;

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Version complète",
    Tooltip = "Version au format complet du pack utilisé",
    Category = "API|Version"
    ))
  FString ApiVersion;

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Principale",
    Tooltip = "Version principale du pack utilisé",
    Category = "API|Version"
    ))
  int ApiVersionPrincipale;

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Secondaire",
    Tooltip = "Version secondaire du pack utilisé",
    Category = "API|Version"
    ))
  int ApiVersionSecondaire;

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Révision",
    Tooltip = "Révision du pack utilisé",
    Category = "API|Version"
    ))
  int ApiRevision;

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Suffixe",
    Tooltip = "Version Suffixe du pack utilisé",
    Category = "API|Version"
    ))
  FString ApiSuffixe;


public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Nom",
    Tooltip = "Nom du moteur utilisé part le pack",
    Category = Moteur
    ))
  FName MoteurNom;

public:
  UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (
    DisplayName = "Version",
    Tooltip = "Version du moteur utilisé part le pack",
    Category = Moteur
    ))
  FName MoteurVersion;
};
