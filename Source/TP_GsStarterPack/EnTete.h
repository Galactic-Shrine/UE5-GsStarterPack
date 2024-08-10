// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#pragma once

#define NUMERO_DE_CONSTRUCTION 20

/**
 * Version de l'API
 */

#define GS_MAJOR_VERSION  1
#define GS_MINOR_VERSION  0
#define GS_PATCH_VERSION  1
#define GS_RELEASE_NAME   "Alpha"

 /**
  * Version du moteur raccourcir
  */
#define ENGINE_VERSION_STRING_SHORT \
	VERSION_STRINGIFY(ENGINE_MAJOR_VERSION) \
	VERSION_TEXT(".") \
	VERSION_STRINGIFY(ENGINE_MINOR_VERSION)

  /**
   * Réglage par défaut de l'écran minimale
   */
#define LARGEUR_ECRAN_MINIMALE 800
#define HAUTEUR_ECRAN_MINIMALE 600
