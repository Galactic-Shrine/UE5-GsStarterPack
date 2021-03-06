// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Controles.generated.h"

/**
 * Class pour les contrôles utilisateur
 */
UCLASS()
class GSSTARTERPACK_API UControles : public UBlueprintFunctionLibrary {

  GENERATED_BODY()

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir le regard inversé", 
      Tooltip = "Permet d'obtenir le regard inversé sur la position X et Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le regard inversé sur la position X et Y (Les valeurs par défaut sont appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLeRegardInverse(bool& bInverserLeRegardX, bool& bInverserLeRegardY, bool bInverserLeRegardX_ParDefaut, bool bInverserLeRegardY_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir le regard inversé", 
      Tooltip = "Permet de définir les nouveaux paramètres du regard inversé sur la position X et Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir les nouveaux paramètres du regard inversé sur la position X et Y */
    static bool DefinirLeRegardInverse(const bool bInverserLeRegardX, const bool bInverserLeRegardY);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir le regard inversé X", 
      Tooltip = "Permet d'obtenir le regard inversé sur la position X", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le regard inversé sur la position X (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLeRegardInverseX(bool& bInverserLeRegardX, bool bInverserLeRegardX_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir le regard inversé X", 
      Tooltip = "Permet de définir les nouveaux paramètres du regard inversé sur la position X", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir les nouveaux paramètres du regard inversé sur la position X */
    static bool DefinirLeRegardInverseX(const bool bInverserLeRegardX);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir le regard inversé Y", 
      Tooltip = "Permet d'obtenir le regard inversé sur la position Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le regard inversé sur la position Y (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLeRegardInverseY(bool& bInverserLeRegardY, bool bInverserLeRegardY_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir le regard inversé Y", 
      Tooltip = "Permet de définir les nouveaux paramètres du regard inversé sur la position Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir les nouveaux paramètres du regard inversé sur la position Y */
    static bool DefinirLeRegardInverseY(const bool bInverserLeRegardY);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir la vitesse de la caméra", 
      Tooltip = "Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position X et Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position X et Y (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLaVitesseDeLaCamera(float& VitesseDeLaCameraX, float& VitesseDeLaCameraY, float VitesseDeLaCameraX_ParDefaut, float VitesseDeLaCameraY_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir la vitesse de la caméra", 
      Tooltip = "Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position X et Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position X et Y */
    static bool DefinirLaVitesseDeLaCamera(const float VitesseDeLaCameraX, const float VitesseDeLaCameraY);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir la vitesse de la caméra X", 
      Tooltip = "Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position X", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position X (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLaVitesseDeLaCameraX(float& VitesseDeLaCameraX, float VitesseDeLaCameraX_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir la vitesse de la caméra X", 
      Tooltip = "Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position X", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position X */
    static bool DefinirLaVitesseDeLaCameraX(const float VitesseDeLaCameraX);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir la vitesse de la caméra Y", 
      Tooltip = "Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le multiplicateur de vitesse de la caméra sur la position Y (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLaVitesseDeLaCameraY(float& VitesseDeLaCameraY, float VitesseDeLaCameraY_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir la vitesse de la caméra Y", 
      Tooltip = "Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position Y", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir les nouveaux paramètres de multiplicateur de vitesse de la caméra sur la position Y */
    static bool DefinirLaVitesseDeLaCameraY(const float VitesseDeLaCameraY);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Obtenir la vibration", 
      Tooltip = "Permet d'obtenir le Grondement/la Vibration On/Off", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet d'obtenir le Grondement/la Vibration On/Off (La valeurs par défaut est appliquées que s'il n'y a encore rien de sauvegardé) */
    static bool ObtenirLaVibration(bool& bVibration, bool bVibration_ParDefaut);

  UFUNCTION(BlueprintCallable, meta = (
      DisplayName = "Définir la vibration", 
      Tooltip = "Permet de définir les nouveaux paramètres du Grondement/la Vibration On/Off", 
      Category = "# GalacticShrine|Paramètres|Contrôles"
    ))
    /* Permet de définir le Grondement/la Vibration On/Off */
    static bool DefinirLaVibration(const bool bVibration);
};
