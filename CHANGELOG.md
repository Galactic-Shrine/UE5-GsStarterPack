# Changelog

Tous les changements notables apportés à ce projet seront documentés dans ce fichier.

## [1.0.1] - 2024-08-09
### Ajouts
- Ajout du fichier `EnTete.h` pour la gestion du numéro de construction et des informations sur les versions.
  - Définition du numéro de construction.
  - Ajout des macros pour la version majeure, mineure et de patch du projet.
  - Ajout de la version raccourcie du moteur Unreal.
  - Définition des paramètres de résolution d'écran minimale.
- Mise à jour du fichier `TP_GsStarterPackEditor.Target.cs` pour intégrer la génération automatique du numéro de construction.
  - Ajout de la vérification de l'existence d'un fichier marqueur pour éviter les builds répétés trop fréquents.
  - Incrémentation automatique du numéro de construction à chaque build.
- Mise à jour des fichiers `.h` et `.cpp` pour refléter les changements de noms et de commentaires.
- Amélioration des commentaires pour clarifier le rôle des variables et fonctions.
- 2024-08-10
  - Information System: Création de la classe `UInformation` qui permet d'obtenir diverses informations sur le projet via des fonctions Blueprints.
    - Ajout de la fonction `NomDeLaSociete` pour récupérer le nom de la société qui a créé le projet.
    - Ajout de la fonction `NomDistingueDeLaSociete` pour récupérer le nom distingué de la société.
    - Ajout de la fonction `NomDuProjet` pour récupérer le nom du projet.
    - Ajout de la fonction `PageDaccueil` pour récupérer l'URL de la page d'accueil du projet.
    - Ajout de la fonction `SupportDeContact` pour récupérer les coordonnées de contact pour le soutien du projet.
    - Ajout de la fonction `DroitDauteur` pour récupérer les avis de droit d'auteur et/ou de marque du projet.
    - Ajout de la fonction `ConditionsDeLicence` pour récupérer les conditions de licence du projet.
    - Ajout de la fonction `PolitiqueDeConfidentialite` pour récupérer la politique de confidentialité du projet.
    - Ajout de la fonction `Description` pour récupérer la description du projet.
    - Ajout de la fonction `VersionDuJeu` pour récupérer la version du projet.
    - Ajout de la fonction `NumeroDeConstructionDuJeu` pour récupérer le numéro de construction du projet.
    - Ajout de la fonction `IdDuProjet` pour récupérer l'identifiant unique du projet.
    - Ajout de la fonction `TitreAfficheDuProjet` pour récupérer le titre du projet tel qu'il est affiché sur la barre de titre de la fenêtre.
    - Ajout de la fonction `InformationsSurLeTitreDuProjetDebug` pour récupérer les informations supplémentaires sur le titre du projet en mode Debug.
    - Ajout de la fonction `bLaFenetreDoitElleConserverSonRapportAspect` pour déterminer si la fenêtre du jeu doit conserver son aspect ratio lorsqu'elle est redimensionnée.
    - Ajout de la fonction `bUtiliserLaFenetreSansBordure` pour déterminer si le jeu doit utiliser une fenêtre sans bordure.
    - Ajout de la fonction `bDemarrageEnVR` pour déterminer si le jeu doit démarrer en VR.
    - Ajout de la fonction `bAutoriserLaFermeture` pour autoriser ou non la fermeture de la fenêtre du jeu.
    - Ajout de la fonction `bPermettreDeMaximiser` pour autoriser ou non la maximisation de la fenêtre du jeu.
    - Ajout de la fonction `bPermettreDeReduire` pour autoriser ou non la réduction de la fenêtre du jeu.
    - Ajout de la fonction `bAutoriserLeRedimensionnementDeLaFenetres` pour autoriser ou non le redimensionnement de la fenêtre du jeu. 


### Corrections
- 2024-07-30
  - Ajout de la gestion des erreurs dans la fonction `CheckFirstTimeLaunch` pour une meilleure robustesse.
  - Mise à jour des commentaires pour améliorer la compréhension du code.

### Ajouts
- 2024-07-15
  - Introduction des méta-données Unreal (`meta`) pour les propriétés des classes.
  - Organisation des catégories dans l'éditeur Unreal Engine pour une meilleure gestion des propriétés.

### Initial
- 2024-07-01
  - Création des classes `USauvegardeParametres` et `UInstanceDeJeuParDefaut`.
  - Implémentation des fonctions de vérification du premier lancement de l'application.
  - Configuration des propriétés et sauvegarde de l'état du lancement.

## [1.0.0] - Initial
- Mise en place initiale du projet.
