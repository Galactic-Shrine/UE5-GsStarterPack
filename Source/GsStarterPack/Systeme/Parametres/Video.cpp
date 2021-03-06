// © 2019-2021, Galactic-Shrine - Tous droits réservés.


#include "Systeme/Parametres/Video.h"
#include "Systeme/Constant.h"

/* Essayez de récupérer l'objet GameUserSettings du moteur. */
UGameUserSettings* UVideo::ObtenirLesParametresUtilisateurDuJeu() {

	if (GEngine != nullptr) return GEngine->GameUserSettings;

	return nullptr;
}

/* Obtenir la résolution d'écran actuelle */
FString UVideo::ObtenirLaResolutionDecranActuelle() {

	// Variable qui fait appel à la fonction ObtenirLobjetParametresDeLutilisateurDuJeu()
	UGameUserSettings* Parametres = ObtenirLesParametresUtilisateurDuJeu();

	// On regarde si la variable paramètres fonctionner sinon on renvoie rien
	if (!Parametres) return FString("");

	// On récupère la résolution actuelle
	FIntPoint Resolution = Parametres->GetScreenResolution();

	// On renvoie la résolution
	return FString::FromInt(Resolution.X) + "x" + FString::FromInt(Resolution.Y);
}

bool UVideo::ObtenirLaResolutionsDecranSupportees(TArray<FString>& Resolutions, int32& IndexDeLaResolutionDecranActuelle) {

	// On crée un tableau
	FScreenResolutionArray TableauDesResolutions;

	// A besoin de la dépendance "RHI" dans le fichier GsStarterPack.Build.cs
	if (RHIGetAvailableResolutions(TableauDesResolutions, vrai)) {

		// Variable qui fait appel à la fonction ObtenirLobjetParametresDeLutilisateurDuJeu()
		UGameUserSettings* Parametres = ObtenirLesParametresUtilisateurDuJeu();

		// On regarde si la variable paramètres fonctionner sinon on renvoie faux
		if (!Parametres) return faux;

		// On récupère la résolution actuelle
		FIntPoint ResolutionActuelle = Parametres->GetScreenResolution();

		// On remplir le tableau
		for (int32 i = 0; i < TableauDesResolutions.Num(); i++) {

			if (TableauDesResolutions[i].Width < LARGEUR_ECRAN_MINIMALE || TableauDesResolutions[i].Height < HAUTEUR_ECRAN_MINIMALE) continue;

			FString Sequence = FString::FromInt(TableauDesResolutions[i].Width) + "x" + FString::FromInt(TableauDesResolutions[i].Height);

			Resolutions.AddUnique(Sequence);

			if (TableauDesResolutions[i].Width == ResolutionActuelle.X && TableauDesResolutions[i].Height == ResolutionActuelle.Y) IndexDeLaResolutionDecranActuelle = Resolutions.Num() - 1;
		}

		// Si on réussi à obtenir des résolutions d'écran, on renvoie vrai
		return vrai;
	}

	// Si on n'a pas réussi à obtenir des résolutions d'écran, on renvoie faux
	return faux;
}