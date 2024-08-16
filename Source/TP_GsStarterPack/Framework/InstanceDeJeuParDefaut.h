// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#pragma once

#include "CoreMinimal.h"
#include "Engine/GameInstance.h"
#include "InstanceDeJeuParDefaut.generated.h"

/**
 * UInstanceDeJeuParDefaut
 * Classe GameInstance personnalisée pour gérer les données et la logique du jeu au niveau global.
 */
UCLASS()
class TP_GSSTARTERPACK_API UInstanceDeJeuParDefaut : public UGameInstance {

  GENERATED_BODY()

public:

  virtual void Init() override;

  /**
   * Indique si c'est le premier lancement de l'application.
   * Utilisée pour déterminer si la vidéo d'introduction doit être imposée sans possibilité de saut.
   */
  UPROPERTY(BlueprintReadOnly, Category = "# GalacticShrine|ParamètresDuJeu", meta = (
    DisplayName = "Premier Lancement",
    Tooltip = "Indique si c'est le premier lancement de l'application."
    )
  )
  bool bEstPremierLancement = true;

  /**
   * Vérifie si c'est la première fois que l'application est lancée.
   * Cette fonction charge une sauvegarde pour déterminer l'état du premier lancement.
   * Si aucune sauvegarde n'existe, cela signifie que c'est le premier lancement.
   * Si c'est le cas, une nouvelle sauvegarde est créée pour marquer que l'application a été lancée.
   */
  UFUNCTION(BlueprintCallable, Category = "# GalacticShrine|Lancement", meta = (
    DisplayName = "Vérifier Premier Lancement",
    Tooltip = "Vérifie si c'est la première fois que l'application est lancée."
    )
  )
  void VerifierPremierLancement();

  /**
   * Retourne la valeur de bEstPremierLancement.
   * Permet d'accéder à l'état du premier lancement dans les Blueprints.
   */
  UFUNCTION(BlueprintCallable, Category = "# GalacticShrine|Lancement", meta = (
    DisplayName = "Obtenir Premier Lancement",
    Tooltip = "Retourne la valeur de bEstPremierLancement."
    )
  )
  bool ObtenirEstPremierLancement() const {
    return bEstPremierLancement;
  }
};
