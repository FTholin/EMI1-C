#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    char mot[100]; // Étape 3: Déclaration du tableau pour le mot.
    int longueur;
    bool estPalindrome = true; // Étape 3: Déclaration de la variable de résultat.
    
    // Étape 4: Lecture du mot.
    printf("Entrez un mot pour vérifier s'il s'agit d'un palindrome : ");
    scanf("%99s", mot); // Lecture sécurisée du mot.
    longueur = strlen(mot); // Stockage de la longueur du mot.
    
    // Étape 5: Vérification du palindrome.
    for (int i = 0; i < longueur / 2; i++) {
        if (mot[i] != mot[longueur - i - 1]) {
            estPalindrome = false; // Mise à jour du booléen si les caractères ne correspondent pas.
            break; // Sortie anticipée de la boucle si le mot n'est pas un palindrome.
        }
    }
    
    // Étape 6: Affichage du résultat.
    if (estPalindrome) {
        printf("Le mot '%s' est un palindrome.\n", mot);
    } else {
        printf("Le mot '%s' n'est pas un palindrome.\n", mot);
    }
    
    return 0;
}
