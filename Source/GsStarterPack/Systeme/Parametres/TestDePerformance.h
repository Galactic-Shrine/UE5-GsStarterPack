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
class GSSTARTERPACK_API UTestDePerformance : public UBlueprintFunctionLibrary {

	GENERATED_BODY()

public:
	UFUNCTION(BlueprintPure, meta = (DisplayName = "Vérifiez Si Le Benchmark Est Déjà Atteint", CompactNodeTitle = "VerifiezSiLeBenchmarkEstDejaAtteint"), Category = "GalacticShrine|Paramètres|Test de performance")
		/* Vérifiez si le benchmark des paramètres de l'utilisateur du jeu a déjà fonctionné.	*/
		static bool VerifiezSiLeBenchmarkEstDejaAtteint();

public:
	UFUNCTION(BlueprintCallable, Category = "GalacticShrine|Paramètres|Test de performance")
		/* Établit la variable BenchmarkAlreadyRan pour se souvenir du prochain démmarage.	*/
		static void LeBenchmarkEstDejaEtablit(bool bLeBenchmarkEstDejaEtablit = false);
};
