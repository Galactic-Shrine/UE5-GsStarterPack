// © 2019-2021, Galactic-Shrine - Tous droits réservés.


#include "Systeme/Parametres/TestDePerformance.h"
#include "../Constant.h"
#include "Misc/ConfigCacheIni.h" // Donne l'accès au GConfig

/* Vérifiez si le benchmark des paramètres de l'utilisateur du jeu a déjà fonctionné.	*/
bool UTestDePerformance::VerifiezSiLeBenchmarkEstDejaAtteint() {
	//if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool LeBenchmarkADejaEteAtteint = faux;

	// Le benchmark des paramètres de l'utilisateur du jeu a-t-il déjà fonctionné ?
	GConfig->GetBool(
		*SectionDesParametres,
		TEXT("BenchmarkAlreadyRan"),
		LeBenchmarkADejaEteAtteint,
		GGameUserSettingsIni
	);

	return LeBenchmarkADejaEteAtteint;
}

/* Établit la variable BenchmarkAlreadyRan pour se souvenir du prochain démmarage. */
void UTestDePerformance::LeBenchmarkEstDejaEtablit(bool bLeBenchmarkEstDejaEtablit) {
	//if (!GConfig) return;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Établit la variable BenchmarkAlreadyRan.
	GConfig->SetFloat(
		*SectionDesParametres,
		TEXT("BenchmarkAlreadyRan"),
		bLeBenchmarkEstDejaEtablit,
		GGameUserSettingsIni
	);
}