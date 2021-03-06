// © 2019-2021, Galactic-Shrine - Tous droits réservés.

#pragma once

/**
 * Version de l'API
 */
#define GS_MAJOR_VERSION	0
#define GS_MINOR_VERSION	4
#define GS_PATCH_VERSION	10
#define GS_RELEASE_NAME "Alpha"

/**
 * Version du moteur raccourcir
 */
#define ENGINE_VERSION_STRING_SHORT \
	VERSION_STRINGIFY(ENGINE_MAJOR_VERSION) \
	VERSION_TEXT(".") \
	VERSION_STRINGIFY(ENGINE_MINOR_VERSION)

/**
 * Faux est égale a false
 */
#define faux 0

/**
 * Vrai est égale a true
 */
#define vrai !faux

/**
 * Réglage par défaut de l'écran minimale
 */
#define LARGEUR_ECRAN_MINIMALE 800
#define HAUTEUR_ECRAN_MINIMALE 600