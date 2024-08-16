// © 2019-2024, ⋞Galactic-Shrine⋟. GsSp Projet - Tous droits réservés.

#include "../Framework/InstanceDeJeuParDefaut.h"
#include "../Systeme/SauvegardeParametres.h"
#include "Kismet/GameplayStatics.h"

void UInstanceDeJeuParDefaut::Init() {

  Super::Init();
  //VerifierPremierLancement(); //Décommenter pour lancer la vérification automatique.
}

/**
 * Implémentation de la fonction VerifierPremierLancement.
 * Cette fonction vérifie si l'application a déjà été lancée en essayant de charger une sauvegarde existante.
 * Si aucune sauvegarde n'est trouvée, cela signifie que c'est le premier lancement et une nouvelle sauvegarde est créée.
 */
void UInstanceDeJeuParDefaut::VerifierPremierLancement() {

  // Nom du fichier de sauvegarde utilisé pour enregistrer l'état du premier lancement.
  FString NomSlotSauvegarde = TEXT("StatutLancement");
  int32 IndexUtilisateur = 0;

  // Tente de charger la sauvegarde
  USauvegardeParametres* InstanceSauvegarde = Cast<USauvegardeParametres>(UGameplayStatics::LoadGameFromSlot(NomSlotSauvegarde, IndexUtilisateur));

  if (InstanceSauvegarde) {

    // Si une sauvegarde existe, l'application a déjà été lancée
    bEstPremierLancement = !InstanceSauvegarde->bPremierLancementEffectue;
  }
  else {

    // Sinon, c'est le premier lancement
    bEstPremierLancement = true;

    // Crée une nouvelle sauvegarde pour indiquer que l'application a été lancée
    InstanceSauvegarde = Cast<USauvegardeParametres>(UGameplayStatics::CreateSaveGameObject(USauvegardeParametres::StaticClass()));
    InstanceSauvegarde->bPremierLancementEffectue = true;
    UGameplayStatics::SaveGameToSlot(InstanceSauvegarde, NomSlotSauvegarde, IndexUtilisateur);
  }
}
