// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "TestDePerformance.generated.h"

/**
 *
 */
UCLASS()
class GSSTARTERPACK_API UTestDePerformance : public UBlueprintFunctionLibrary{

  GENERATED_BODY()

  public:
    UFUNCTION(BlueprintPure, meta = (
        DisplayName = "Obtenir si le Benchmark est déjà établit", 
        CompactNodeTitle = "ObtenirSiLeBenchmarkEstDejaEtablit", 
        Tooltip = "Vérifiez si le benchmark des paramètres de l'utilisateur du jeu a déjà fonctionné.",
        Category = "# GalacticShrine|Paramètres|Test de performance"
      ))
      /* Vérifiez si le benchmark des paramètres de l'utilisateur du jeu a déjà fonctionné. */
      static bool ObtenirSiLeBenchmarkEstDejaEtablit();

  public:
    UFUNCTION(BlueprintCallable, meta = (
        DisplayName = "Définir si le Benchmark est déjà établit", 
        CompactNodeTitle = "DefinirSiLeBenchmarkEstDejaEtablit",
        Tooltip = "Établit la variable BenchmarkAlreadyRan pour se souvenir du prochain démmarage", 
        Category = "# GalacticShrine|Paramètres|Test de performance"
      ))
      /* Établit la variable BenchmarkAlreadyRan pour se souvenir du prochain démmarage.  */
      static void DefinirSiLeBenchmarkEstDejaEtablit(bool LeBenchmarkEstDejaEtablit = false);
};
