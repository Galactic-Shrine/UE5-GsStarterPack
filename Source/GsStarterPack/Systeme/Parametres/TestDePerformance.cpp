// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#include "Systeme/Parametres/TestDePerformance.h"
#include "Systeme/Constant.h"
#include "Misc/ConfigCacheIni.h" // Donne l'accès au GConfig

/* Vérifiez si le benchmark des paramètres de l'utilisateur du jeu a déjà fonctionné.	*/
bool UTestDePerformance::ObtenirSiLeBenchmarkEstDejaEtablit() {

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool LeBenchmarkADejaEteEtablit = faux;

	// Le benchmark des paramètres de l'utilisateur du jeu a-t-il déjà fonctionné ?
	GConfig->GetBool(
		*SectionDesParametres,
		TEXT("BenchmarkAlreadyRan"),
		LeBenchmarkADejaEteEtablit,
		GGameUserSettingsIni
	);

	return LeBenchmarkADejaEteEtablit;
}

/* Établit la variable BenchmarkAlreadyRan pour se souvenir du prochain démmarage. */
void UTestDePerformance::DefinirSiLeBenchmarkEstDejaEtablit(bool LeBenchmarkEstDejaEtablit) {

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Établit la variable BenchmarkAlreadyRan.
	GConfig->SetBool(
		*SectionDesParametres,
		TEXT("BenchmarkAlreadyRan"),
		LeBenchmarkEstDejaEtablit,
		GGameUserSettingsIni
	);
}