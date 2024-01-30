
1. **Échanger les valeurs de deux variables entières en utilisant des pointeurs.**
   - La fonction prend deux adresses de variables (`int *a, int *b`) et utilise une variable temporaire pour échanger leurs valeurs.
   - Test : Définissez deux variables entières, par exemple `int a = 5, b = 10;`. Appelez `echange(&a, &b);`. Affichez `a` et `b` après l'appel pour vérifier si leurs valeurs ont été échangées.

      ```c
      void echange(int *a, int *b) {
      int temp = *a;
      *a = *b;
      *b = temp;
      }

      int main() {
         int a = 5, b = 10;
         printf("Avant échange: a = %d, b = %d\n", a, b);
         echange(&a, &b);
         printf("Après échange: a = %d, b = %d\n", a, b);
         return 0;
      }
      ```

2. **Calcule le périmètre et l'aire d'un cercle en utilisant son rayon.**
   - La fonction prend un double rayon et deux pointeurs double *perimetre et double *aire pour stocker les résultats.
   - Test : Définissez un double rayon = 5.0; et deux double perimetre, aire;. Appelez `calculCercle(rayon, &perimetre, &aire);`. Affichez perimetre et aire pour vérifier les calculs.

      ```c
      void calculCercle(double rayon, double *perimetre, double *aire) {
      *perimetre = 2 * 3.14159 * rayon;
      *aire = 3.14159 * rayon * rayon;
      }

      int main() {
         double rayon = 5.0, perimetre, aire;
         calculCercle(rayon, &perimetre, &aire);
         printf("Périmètre: %.2f, Aire: %.2f\n", perimetre, aire);
         return 0;
      }

      ```
3. **Vérifie si un caractère donné est une voyelle.**
   - La fonction prend un char c et renvoie un résultat 0 si Vrai 1 sinon.
   - Test : Définissez une variable char c = 'a';. Appelez `estVoyelle(c)` et affichez le résultat. Testez avec différents caractères.
      ```c
      int estVoyelle(char c) {
      return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
               c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U') ? 0 : 1;
      }

      int main() {
         char c = 'a';
         printf("'%c' est une voyelle ? %s\n", c, estVoyelle(c) == 0 ? "Oui" : "Non");
         c = 'z';
         printf("'%c' est une voyelle ? %s\n", c, estVoyelle(c) == 0 ? "Oui" : "Non");
         return 0;
      }

      ```

4. **Affiche les n premiers nombres pairs.**
   - La fonction prend un entier n et utilise une boucle pour afficher les nombres pairs.
   - Test : Exécutez `affichePairs(5);`. Vérifiez si les 5 premiers nombres pairs sont affichés correctement.
      ```c
      void affichePairs(int n) {
      for (int i = 0; i < 2 * n; i += 2) {
         printf("%d ", i);
      }
      printf("\n");
      }

      int main() {
         affichePairs(5);
         return 0;
      }

      ```

5. **Calcule la somme des éléments d'un tableau d'entiers.**
   - La fonction prend un pointeur sur un tableau d'entiers et sa taille, puis renvoie la somme de ses éléments.
   - Test : Utilisez un tableau `int tableau[] = {1, 2, 3, 4, 5};`. Appelez `sommeTableau(tableau, 5);`. Vérifiez si la somme est 15.
      ```c
      int sommeTableau(int *tableau, int taille) {
      int somme = 0;
      for (int i = 0; i < taille; i++) {
         somme += tableau[i];
      }
      return somme;
      }

      int main() {
         int tableau[] = {1, 2, 3, 4, 5};
         int somme = sommeTableau(tableau, 5);
         printf("Somme du tableau: %d\n", somme);
         return 0;
      }

      ```

6. **Écrire une fonction qui détermine le plus petit et le plus grand élément dans un tableau d'entiers.**
   - Fonctionnalité : La fonction parcourt le tableau pour comparer chaque élément avec les valeurs actuelles du plus petit et du plus grand élément et les met à jour si nécessaire.
   - Paramètres : Un pointeur vers le tableau d'entiers (int *tableau), la taille du tableau (int taille), et deux pointeurs pour les résultats (int *min et int *max).
   - Test : Créez un tableau d'entiers, appelez la fonction avec ce tableau, et affichez les résultats pour min et max.
      ```c
      void trouveMinMax(int *tableau, int taille, int *min, int *max) {
         *min = *max = tableau[0];
         for (int i = 1; i < taille; i++) {
            if (tableau[i] < *min) *min = tableau[i];
            if (tableau[i] > *max) *max = tableau[i];
         }
      }

      int main() {
         int tableau[] = {12, 4, 5, 3, 15, 7};
         int min, max;
         trouveMinMax(tableau, 6, &min, &max);
         printf("Min: %d, Max: %d\n", min, max);
         return 0;
      }

      ```


7. **Écrire une fonction qui calcule l'Indice de Masse Corporelle (IMC) d'une personne et fournit une interprétation basée sur le résultat.**
   - Fonctionnalité : L'IMC est calculé en divisant le poids en kilogrammes par le carré de la taille en mètres. L'interprétation de l'IMC est faite selon les catégories standards (sous-poids, poids normal, surpoids, obésité).
   - Paramètres de la Fonction : Poids en kilogrammes (double poids) et taille en mètres (double taille).
   - Logique de la Fonction : Calculer l'IMC avec la formule IMC = poids / (taille * taille) et déterminer la catégorie de poids en fonction de l'IMC.
   - Catégories de l'IMC : Sous-poids (IMC < 18.5), Poids normal (18.5 ≤ IMC < 25), Surpoids (25 ≤ IMC < 30), Obésité (IMC ≥ 30).
   - Test de la Fonction : Appeler la fonction avec des valeurs spécifiques de poids et de taille et afficher l'IMC et l'interprétation. Tester avec différents scénarios (sous-poids, poids normal, surpoids, obésité).

      ```c
      void calculeIMC(double poids, double taille) {
         double imc = poids / (taille * taille);
         printf("IMC: %.2f - ", imc);
         if (imc < 18.5)
            printf("Sous-poids\n");
         else if (imc < 25)
            printf("Poids normal\n");
         else if (imc < 30)
            printf("Surpoids\n");
         else
            printf("Obésité\n");
      }

      int main() {
         calculeIMC(68, 1.75); // Poids normal
         calculeIMC(85, 1.75); // Surpoids
         return 0;
      }


      ```

8. **Objectif : Développer une fonction en C qui calcule la distance entre deux points, soit dans un espace 2D, soit dans un espace 3D.**
   - Fonctionnalité : La fonction doit permettre de calculer la distance euclidienne entre deux points. Pour l'espace 2D, la distance est calculée en utilisant les coordonnées (x, y) des points. Pour l'espace 3D, la distance utilise les coordonnées (x, y, z).
   - Paramètres de la Fonction : Coordonnées du premier point (double x1, double y1, double z1 pour 3D ; double x1, double y1 pour 2D) et coordonnées du second point (double x2, double y2, double z2 pour 3D ; double x2, double y2 pour 2D).
   - Logique de la Fonction : Utiliser la formule de la distance euclidienne, en 2D (√((x2 - x1)² + (y2 - y1)²)) et en 3D (√((x2 - x1)² + (y2 - y1)² + (z2 - z1)²)).
   - Scénario de Test : Pour 2D, calculer la distance entre les points (1, 2) et (4, 6). Pour 3D, calculer la distance entre les points (1, 2, 3) et (4, 6, 8) et vérifier si les distances sont correctes.


      ```c
         double calculeDistance(double x1, double y1, double x2, double y2) {
            return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
         }

         double calculeDistance3D(double x1, double y1, double z1, double x2, double y2, double z2) {
            return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1) + (z2 - z1) * (z2 - z1));
         }

         int main() {
            printf("Distance 2D: %.2f\n", calculeDistance(1, 2, 4, 6));
            printf("Distance 3D: %.2f\n", calculeDistance3D(1, 2, 3, 4, 6, 8));
            return 0;
         }


      ```

9. **Créer une fonction en C pour trier un tableau d'entiers.**
   - Fonctionnalité : La fonction doit réorganiser les éléments d'un tableau d'entiers de sorte qu'ils soient dans un ordre croissant (ou décroissant). On pourrait choisir un tri simple comme le tri à bulles ou le tri par sélection.
   - Paramètres de la Fonction : Un tableau d'entiers (int *tableau) et la taille du tableau (int taille).
   - Logique de la Fonction : Parcourir le tableau, comparer et échanger les éléments, et répéter le processus jusqu'à ce que le tableau soit trié.
   - Scénario de Test : Avec un tableau désordonné (par exemple, [3, 1, 4, 1, 5, 9, 2, 6, 5, 3]), vérifier si le tableau est correctement trié après l'exécution de la fonction.


      ```c

      void trieTableau(int *tableau, int taille) {
         for (int i = 0; i < taille - 1; i++) {
            for (int j = 0; j < taille - i - 1; j++) {
                  if (tableau[j] > tableau[j + 1]) {
                     int temp = tableau[j];
                     tableau[j] = tableau[j + 1];
                     tableau[j + 1] = temp;
                  }
            }
         }
      }

      int main() {
         int tableau[] = {3, 1, 4, 1, 5, 9, 2, 6, 5, 3};
         trieTableau(tableau, 10);
         for (int i = 0; i < 10; i++) {
            printf("%d ", tableau[i]);
         }
         printf("\n");
         return 0;
      }

      ```

10. **Développer une fonction en C qui valide une adresse email.**
    - Fonctionnalité : La fonction doit vérifier si l'adresse email fournie est dans un format valide, y compris la présence d'un caractère @, d'un domaine, et d'une extension de domaine après le @.
    - Paramètres de la Fonction : Un pointeur vers une chaîne de caractères représentant l'adresse email à valider (const char *email).
    - Logique de la Fonction : Vérifier la présence d'un '@', la structure du domaine et de l'extension, et l'absence de caractères spéciaux interdits.
    - Test : Tester avec des adresses email valides et invalides et vérifier si le résultat est correct.
      ```c

      #include <stdio.h>
      #include <string.h>
      #include <ctype.h>

      int valideEmail(const char *email) {
         int atCount = 0;
         int dotCount = 0;
         const char *atPos = NULL;

         // Vérifier la présence d'un '@' et sa position.
         for (const char *p = email; *p; ++p) {
            if (*p == '@') {
                  atCount++;
                  atPos = p;
            } else if (*p == '.' && atPos) {
                  dotCount++;
            } else if (!isalnum(*p) && *p != '.' && *p != '_') {
                  // Vérifier l'absence de caractères spéciaux interdits.
                  return 0;
            }
         }

         // Vérifier la structure du domaine et de l'extension.
         return atCount == 1 && dotCount > 0 && atPos != email && *(atPos + 1) != '.';
      }

      int main() {
         printf("Email 'exemple@domaine.com' est valide ? %s\n", valideEmail("exemple@domaine.com") ? "Oui" : "Non");
         printf("Email 'exemple@domaine..' est valide ? %s\n", valideEmail("exemple@domaine..") ? "Oui" : "Non");
         printf("Email '@domaine.com' est valide ? %s\n", valideEmail("@domaine.com") ? "Oui" : "Non");
         printf("Email 'exemple@.com' est valide ? %s\n", valideEmail("exemple@.com") ? "Oui" : "Non");
         printf("Email 'exemple domaine.com' est valide ? %s\n", valideEmail("exemple domaine.com") ? "Oui" : "Non");
         return 0;
      }

      ```