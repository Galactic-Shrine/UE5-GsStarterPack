// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/SaveGame.h"
#include "SauvegardeParametres.generated.h"

/**
 * USauvegardeParametres
 * Classe de sauvegarde personnalisée pour stocker l'état du premier lancement de l'application.
 */
UCLASS()
class TP_GSSTARTERPACK_API USauvegardeParametres : public USaveGame {

  GENERATED_BODY()

public:
  /**
   * Indique si l'application a été lancée pour la première fois.
   * Si true, l'application a déjà été lancée.
   */
  UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "# GalacticShrine|ParamètresDuJeu", meta = (
    DisplayName = "Premier Lancement",
    Tooltip = "Indique si l'application a été lancée pour la première fois."
    )
  )
  bool bPremierLancementEffectue = false;
};
