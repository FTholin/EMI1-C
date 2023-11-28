#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nombreMystere = 0, nombreEntre = 0;
    const int MAX = 100, MIN = 1;
    srand(time(NULL));
    nombreMystere = (rand() % (MAX - MIN + 1)) + MIN;
    printf("Bienvenue dans le jeu du nombre mystere !\n\n");

    // Initialiser une variable booléenne "trouve" à faux.
    int trouve = 0;

    // Utiliser une boucle "while" qui se poursuit tant que "trouve" est faux.
    while (!trouve) {

        // Demander à l'utilisateur de proposer un nombre et le stocker dans une variable "nombreEntre".
        printf("Proposez un nombre entre 1 et 100 : ");
        scanf("%d", &nombreEntre);

        // Vérifier si "nombreEntre" est égal à "nombreMystere".
        if (nombreEntre == nombreMystere) {
            trouve = 1; // mettre "trouve" à vrai pour sortir de la boucle.
            printf("Bravo, vous avez trouvé le nombre mystere en %d coups !\n", nombreEntre);
        } else {
            // Sinon, utiliser des instructions conditionnelles pour aider l'utilisateur à trouver le nombre mystère.
            if (nombreEntre > nombreMystere) {
                printf("Le nombre mystere est plus petit que %d\n", nombreEntre);
            } else {
                printf("Le nombre mystere est plus grand que %d\n", nombreEntre);
            }
        }
    }
    return 0;
}