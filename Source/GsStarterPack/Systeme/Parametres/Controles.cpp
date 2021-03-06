// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#include "Systeme/Parametres/Controles.h"
#include "Systeme/Constant.h"
#include "GeneralProjectSettings.h" // Nécessite le module EngineSettings
#include "Misc/ConfigCacheIni.h" // Donne l'accès au GConfig

/* Permet d'obtenir le regard inversé sur la position X et Y (Les valeurs par défaut sont appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLeRegardInverse(bool& bInverserLeRegardX, bool& bInverserLeRegardY, bool bInverserLeRegardX_ParDefaut, bool bInverserLeRegardY_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le regard inversé X
	Succes = GConfig->GetBool(
		*SectionDesParametres,
		TEXT("InvertLookX"),
		bInverserLeRegardX,
		GGameUserSettingsIni
	);

	if (!Succes) {

		bInverserLeRegardX = bInverserLeRegardX_ParDefaut;
	}

	// Obtenir le regard inversé Y
	Succes = GConfig->GetBool(
		*SectionDesParametres,
		TEXT("InvertLookY"),
		bInverserLeRegardY,
		GGameUserSettingsIni
	);

	if (!Succes) {

		bInverserLeRegardY = bInverserLeRegardY_ParDefaut;
	}

	return vrai;
}

/* Permet de définir les nouveaux paramètres du regard inversé sur la position X et Y */
bool UControles::DefinirLeRegardInverse(const bool bInverserLeRegardX, const bool bInverserLeRegardY) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le regard inversé X
	GConfig->SetBool(
		*SectionDesParametres,
		TEXT("InvertLookX"),
		bInverserLeRegardX,
		GGameUserSettingsIni
	);

	// Défini le regard inversé Y
	GConfig->SetBool(
		*SectionDesParametres,
		TEXT("InvertLookY"),
		bInverserLeRegardY,
		GGameUserSettingsIni
	);

	return vrai;
}

/* Permet d'obtenir le regard inversé sur la position X (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLeRegardInverseX(bool& bInverserLeRegardX, bool bInverserLeRegardX_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le regard inversé X
	Succes = GConfig->GetBool(
		*SectionDesParametres,
		TEXT("InvertLookX"),
		bInverserLeRegardX,
		GGameUserSettingsIni
	);

	if (!Succes) {

		bInverserLeRegardX = bInverserLeRegardX_ParDefaut;
	}

	return vrai;
}

/* Permet de définir les nouveaux paramètres du regard inversé sur la position X */
bool UControles::DefinirLeRegardInverseX(const bool bInverserLeRegardX) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le regard inversé X
	GConfig->SetBool(
		*SectionDesParametres,
		TEXT("InvertLookX"),
		bInverserLeRegardX,
		GGameUserSettingsIni
	);

	return vrai;
}

/* Permet d'obtenir le regard inversé sur la position Y (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLeRegardInverseY(bool& bInverserLeRegardY, bool bInverserLeRegardY_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le regard inversé Y
	Succes = GConfig->GetBool(
		*SectionDesParametres,
		TEXT("InvertLookY"),
		bInverserLeRegardY,
		GGameUserSettingsIni
	);

	if (!Succes) {

		bInverserLeRegardY = bInverserLeRegardY_ParDefaut;
	}

	return vrai;
}

/* Permet de définir les nouveaux paramètres du regard inversé sur la position Y */
bool UControles::DefinirLeRegardInverseY(const bool bInverserLeRegardY) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le regard inversé Y
	GConfig->SetBool(
		*SectionDesParametres,
		TEXT("InvertLookY"),
		bInverserLeRegardY,
		GGameUserSettingsIni
	);

	return vrai;
}

/* Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position X et Y (Les valeurs par défaut sont appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLaVitesseDeLaCamera(float& VitesseDeLaCameraX, float& VitesseDeLaCameraY, float VitesseDeLaCameraX_ParDefaut, float VitesseDeLaCameraY_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le multiplicateur de vitesse de la caméra X
	Succes = GConfig->GetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierX"),
		VitesseDeLaCameraX,
		GGameUserSettingsIni
	);

	if (!Succes) {

		VitesseDeLaCameraX = VitesseDeLaCameraX_ParDefaut;
	}

	// Obtenir le multiplicateur de vitesse de la caméra Y
	Succes = GConfig->GetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierY"),
		VitesseDeLaCameraY,
		GGameUserSettingsIni
	);

	if (!Succes) {

		VitesseDeLaCameraY = VitesseDeLaCameraY_ParDefaut;
	}

	return vrai;
}

/* Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position X et Y */
bool UControles::DefinirLaVitesseDeLaCamera(const float VitesseDeLaCameraX, const float VitesseDeLaCameraY) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le multiplicateur de vitesse de la caméra X
	GConfig->SetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierX"),
		VitesseDeLaCameraX,
		GGameUserSettingsIni
	);

	// Défini le multiplicateur de vitesse de la caméra Y
	GConfig->SetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierY"),
		VitesseDeLaCameraY,
		GGameUserSettingsIni
	);

	return vrai;
}

/* Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position X (Les valeurs par défaut sont appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLaVitesseDeLaCameraX(float& VitesseDeLaCameraX, float VitesseDeLaCameraX_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le multiplicateur de vitesse de la caméra X
	Succes = GConfig->GetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierX"),
		VitesseDeLaCameraX,
		GGameUserSettingsIni
	);

	if (!Succes) {

		VitesseDeLaCameraX = VitesseDeLaCameraX_ParDefaut;
	}

	return vrai;
}

/* Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position X */
bool UControles::DefinirLaVitesseDeLaCameraX(const float VitesseDeLaCameraX) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le multiplicateur de vitesse de la caméra X
	GConfig->SetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierX"),
		VitesseDeLaCameraX,
		GGameUserSettingsIni
	);

	return vrai;
}

/* Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position Y (Les valeurs par défaut sont appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLaVitesseDeLaCameraY(float& VitesseDeLaCameraY, float VitesseDeLaCameraY_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le multiplicateur de vitesse de la caméra Y
	Succes = GConfig->GetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierY"),
		VitesseDeLaCameraY,
		GGameUserSettingsIni
	);

	if (!Succes) {

		VitesseDeLaCameraY = VitesseDeLaCameraY_ParDefaut;
	}

	return vrai;
}

/* Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position Y */
bool UControles::DefinirLaVitesseDeLaCameraY(const float VitesseDeLaCameraY) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le multiplicateur de vitesse de la caméra Y
	GConfig->SetFloat(
		*SectionDesParametres,
		TEXT("CameraSpeedMultiplierY"),
		VitesseDeLaCameraY,
		GGameUserSettingsIni
	);

	return vrai;
}

/* Permet d'obtenir le Grondement/la Vibration On/Off (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
bool UControles::ObtenirLaVibration(bool& bVibration, bool bVibration_ParDefaut) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	bool Succes;

	// Obtenir le Grondement/la Vibration On/Off
	Succes = GConfig->GetBool(
		*SectionDesParametres,
		TEXT("Rumble"),
		bVibration,
		GGameUserSettingsIni
	);

	if (!Succes) {

		bVibration = bVibration_ParDefaut;
	}

	return vrai;
}

/* Permet de définir le Grondement/la Vibration On/Off */
bool UControles::DefinirLaVibration(const bool bVibration) {

	if (!GConfig) return faux;

	FString SectionDesParametres = "/Script/Engine.GameUserSettings";

	// Défini le Grondement/la Vibration On/Off
	GConfig->SetBool(
		*SectionDesParametres,
		TEXT("Rumble"),
		bVibration,
		GGameUserSettingsIni
	);

	return vrai;
}