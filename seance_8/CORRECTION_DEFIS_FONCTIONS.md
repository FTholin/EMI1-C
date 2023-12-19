
1. **Puissance dix**
   ```c
   #include <math.h>

   double puissance_dix(int n) {
       return pow(10, n);
   }
   ```

2. **Pourcentage de victoire**
   ```c
   double pourcentage_victoire(int victoires, int defaites) {
       int total_parties = victoires + defaites;
       if (total_parties == 0) return 0; // Pour éviter la division par zéro
       return (double)victoires / total_parties * 100;
   }
   ```

3. **Moyenne**
   ```c
   double moyenne(double num1, double num2) {
       return (num1 + num2) / 2;
   }
   ```

4. **Reste**
   ```c
   int reste(int num1, int num2) {
       int num1_modifie = num1 * 2;
       int num2_modifie = num2 / 2;
       return num1_modifie % num2_modifie;
   }
   ```

5. **Dépassement de budget**
   ```c
   int depassement_budget(int budget, int facture_nourriture, int facture_electricite, int facture_internet, int loyer) {
       int total_depenses = facture_nourriture + facture_electricite + facture_internet + loyer;
       return total_depenses > budget ? 1 : 0;
   }
   ```

6. **Deux fois plus grand**
   ```c
   int deux_fois_plus_grand(int num1, int num2) {
       return num1 > 2 * num2 ? 1 : 0;
   }
   ```

7. **Divisible par dix**
   ```c
   int divisible_par_10(int num) {
       return num % 10 == 0 ? 1 : 0;
   }
   ```

8. **Somme non égale à dix**
   ```c
   int somme_differente_dix(int num1, int num2) {
       return num1 + num2 != 10 ? 1 : 0;
   }
   ```

9. **Dans l'intervalle**
   ```c
   int intervalle(int num, int inferieur, int superieur) {
       return num >= inferieur && num <= superieur;
   }
   ```

10. **Évaluation des films**
    ```c
    const char* note_film(int note) {
        if (note <= 5) {
            return "A éviter à tout prix !";
        } else if (note < 9) {
            return "Celui-ci était amusant";
        } else {
            return "Remarquable !";
        }
    }
    ```

11. **Nombre maximum**
    ```c
    const char* nombre_max(int num1, int num2, int num3) {
        if (num1 >= num2 && num1 >= num3) {
            return num1 == num2 || num1 == num3 ? "C'est une égalité !" : num1;
        } else if (num2 >= num1 && num2 >= num3) {
            return num2 == num1 || num2 == num3 ? "C'est une égalité !" : num2;
        } else if (num3 >= num1 && num3 >= num2) {
            return num3 == num1 || num3 == num2 ? "C'est une égalité !" : num3;
        }
    }
    ```


```c
#include <stdio.h>
#include <math.h>

// Déclarations des fonctions (insérez ici les définitions des fonctions)

int main() {
    // Test de la fonction puissance_dix
    printf("Puissance de 10 pour 1: %f\n", puissance_dix(1));
    printf("Puissance de 10 pour 0: %f\n", puissance_dix(0));
    printf("Puissance de 10 pour 2: %f\n", puissance_dix(2));

    // Test de la fonction pourcentage_victoire
    printf("Pourcentage de victoire pour 5 victoires et 5 défaites: %f%%\n", pourcentage_victoire(5, 5));
    printf("Pourcentage de victoire pour 10 victoires et 0 défaites: %f%%\n", pourcentage_victoire(10, 0));

    // Test de la fonction moyenne
    printf("Moyenne de 1 et 100: %f\n", moyenne(1, 100));
    printf("Moyenne de 1 et -1: %f\n", moyenne(1, -1));

    // Test de la fonction reste
    printf("Reste de 15 et 14: %d\n", reste(15, 14));
    printf("Reste de 9 et 6: %d\n", reste(9, 6));

    // Test de la fonction depassement_budget
    printf("Dépassement de budget (100, 20, 30, 10, 40): %d\n", depassement_budget(100, 20, 30, 10, 40));
    printf("Dépassement de budget (80, 20, 30, 10, 30): %d\n", depassement_budget(80, 20, 30, 10, 30));

    // Test de la fonction deux_fois_plus_grand
    printf("Deux fois plus grand (10, 5): %d\n", deux_fois_plus_grand(10, 5));
    printf("Deux fois plus grand (11, 5): %d\n", deux_fois_plus_grand(11, 5));

    // Test de la fonction divisible_par_10
    printf("Divisible par 10 pour 20: %d\n", divisible_par_10(20));
    printf("Divisible par 10 pour 25: %d\n", divisible_par_10(25));

    // Test de la fonction somme_differente_dix
    printf("Somme différente de dix (9, -1): %d\n", somme_differente_dix(9, -1));
    printf("Somme différente de dix (9, 1): %d\n", somme_differente_dix(9, 1));
    printf("Somme différente de dix (5, 5): %d\n", somme_differente_dix(5, 5));

    // Test de la fonction intervalle
    printf("Intervalle (10, 10, 10): %d\n", intervalle(10, 10, 10));
    printf("Intervalle (5, 10, 20): %d\n", intervalle(5, 10, 20));

    // Test de la fonction note_film
    printf("Note du film pour 9: %s\n", note_film(9));
    printf("Note du film pour 4: %s\n", note_film(4));
    printf("Note du film pour 6: %s\n", note_film(6));

    // Test de la fonction nombre_max
    printf("Nombre maximum (-10, 0, 10): %d\n", nombre_max(-10, 0, 10));
    printf("Nombre maximum (-10, 5, -30): %d\n", nombre_max(-10, 5, -30));
    printf("Nombre maximum (-5, -10, -10): %d\n", nombre_max(-5, -10, -10));
    printf("Nombre maximum (2, 3, 3): %s\n", nombre_max(2, 3, 3) == "C'est une égalité !" ? "C'est une égalité !" : "Pas une égalité");

    return 0;
}
```