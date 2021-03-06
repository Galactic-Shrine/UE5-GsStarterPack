// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "Blueprint/BlueprintSupport.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "GameFramework/GameUserSettings.h"
#include "UObject/UnrealType.h"
#include "Video.generated.h"

/**
 * Class des paramètres d'affichage vidéo
 **/
UCLASS()
class GSSTARTERPACK_API UVideo : public UBlueprintFunctionLibrary {

	GENERATED_BODY()

	private:
		// Essayez de récupérer l'objet GameUserSettings du moteur
		static UGameUserSettings* ObtenirLesParametresUtilisateurDuJeu();

	public:
		//UFUNCTION(BlueprintPure, meta = (DisplayName = "Obtenir La Résolution D'écran Actuelle", CompactNodeTitle = "ObtenirLaResolutionDecranActuelle"), Category = "Galactic-Shrine|Paramètres|Affichage")
		UFUNCTION(BlueprintPure, meta = (
				DisplayName = "Obtenir La Résolution D'écran", 
				Tooltip = "Obtenir la résolution d'écran actuelle.", 
				Category = "GalacticShrine|Paramètres|Affichage"
			))
			/* Obtenir la résolution d'écran actuelle.	*/
			static FString ObtenirLaResolutionDecranActuelle();

	public:
		//UFUNCTION(BlueprintCallable, meta = (DisplayName = "Obtenir La Résolutions D'écran Supportées", CompactNodeTitle = "ObtenirLaResolutionsDecranSupportees"), Category = "Galactic-Shrine|Paramètres|Affichage")
		UFUNCTION(BlueprintCallable, meta = (
				DisplayName = "Obtenir La Résolutions D'écran Supportées", 
				Tooltip = "Obtenir la liste des résolutions d'écran supportées par la machine du joueur.", 
				Category = "GalacticShrine|Paramètres|Affichage"
			))
			/* Obtenir la liste des résolutions d'écran supportées par la machine du joueur.	*/
			static bool ObtenirLaResolutionsDecranSupportees(TArray<FString>& Resolutions, int32& IndexDeLaResolutionDecranActuelle);

};

