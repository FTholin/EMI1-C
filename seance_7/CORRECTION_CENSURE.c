#include <stdio.h>
#include <string.h>

int main() {
    // Déclaration des mots à censurer
    char *mots_a_censurer[] = {"mot1", "mot2", "mot3"};
    int nb_mots = 3;

    // Déclaration de la chaîne de caractères pour la phrase
    char phrase[100];
 // bonjour le monde 
    // Demande à l'utilisateur de saisir la phrase
    printf("Entrez une phrase : ");
    fgets(phrase, sizeof(phrase), stdin);

    // Parcours de la liste des mots à censurer
    for (int i = 0; i < nb_mots; i++) {
        char *ptr = phrase;  // Pointeur sur le début de la phrase
        int longueur_mot = strlen(mots_a_censurer[i]);

        // Boucle pour trouver toutes les occurrences du mot à censurer
        while ((ptr = strstr(ptr, mots_a_censurer[i])) != NULL) {
            // Remplacement du mot par des astérisques
            for (int j = 0; j < longueur_mot; j++) {
                ptr[j] = '*';
            }
            ptr += longueur_mot; // Avancer le pointeur
        }
    }

    // Affichage de la phrase censurée
    printf("Phrase censurée : %s\n", phrase);

    return 0;
}
