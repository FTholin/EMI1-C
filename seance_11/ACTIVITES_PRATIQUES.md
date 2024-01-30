
1. **Échanger les valeurs de deux variables entières en utilisant des pointeurs.**
   - La fonction prend deux adresses de variables (`int *a, int *b`) et utilise une variable temporaire pour échanger leurs valeurs.
   - Test : Définissez deux variables entières, par exemple `int a = 5, b = 10;`. Appelez `echange(&a, &b);`. Affichez `a` et `b` après l'appel pour vérifier si leurs valeurs ont été échangées.

2. **Calcule le périmètre et l'aire d'un cercle en utilisant son rayon.**
   - La fonction prend un double rayon et deux pointeurs double *perimetre et double *aire pour stocker les résultats.
   - Test : Définissez un double rayon = 5.0; et deux double perimetre, aire;. Appelez `calculCercle(rayon, &perimetre, &aire);`. Affichez perimetre et aire pour vérifier les calculs.

3. **Vérifie si un caractère donné est une voyelle.**
   - La fonction prend un char c et renvoie un résultat 0 si Vrai 1 sinon.
   - Test : Définissez une variable char c = 'a';. Appelez `estVoyelle(c)` et affichez le résultat. Testez avec différents caractères.

4. **Affiche les n premiers nombres pairs.**
   - La fonction prend un entier n et utilise une boucle pour afficher les nombres pairs.
   - Test : Exécutez `affichePairs(5);`. Vérifiez si les 5 premiers nombres pairs sont affichés correctement.

5. **Calcule la somme des éléments d'un tableau d'entiers.**
   - La fonction prend un pointeur sur un tableau d'entiers et sa taille, puis renvoie la somme de ses éléments.
   - Test : Utilisez un tableau `int tableau[] = {1, 2, 3, 4, 5};`. Appelez `sommeTableau(tableau, 5);`. Vérifiez si la somme est 15.

6. **Écrire une fonction qui détermine le plus petit et le plus grand élément dans un tableau d'entiers.**
   - Fonctionnalité : La fonction parcourt le tableau pour comparer chaque élément avec les valeurs actuelles du plus petit et du plus grand élément et les met à jour si nécessaire.
   - Paramètres : Un pointeur vers le tableau d'entiers (int *tableau), la taille du tableau (int taille), et deux pointeurs pour les résultats (int *min et int *max).
   - Test : Créez un tableau d'entiers, appelez la fonction avec ce tableau, et affichez les résultats pour min et max.



7. **Écrire une fonction qui calcule l'Indice de Masse Corporelle (IMC) d'une personne et fournit une interprétation basée sur le résultat.**
   - Fonctionnalité : L'IMC est calculé en divisant le poids en kilogrammes par le carré de la taille en mètres. L'interprétation de l'IMC est faite selon les catégories standards (sous-poids, poids normal, surpoids, obésité).
   - Paramètres de la Fonction : Poids en kilogrammes (double poids) et taille en mètres (double taille).
   - Logique de la Fonction : Calculer l'IMC avec la formule IMC = poids / (taille * taille) et déterminer la catégorie de poids en fonction de l'IMC.
   - Catégories de l'IMC : Sous-poids (IMC < 18.5), Poids normal (18.5 ≤ IMC < 25), Surpoids (25 ≤ IMC < 30), Obésité (IMC ≥ 30).
   - Test de la Fonction : Appeler la fonction avec des valeurs spécifiques de poids et de taille et afficher l'IMC et l'interprétation. Tester avec différents scénarios (sous-poids, poids normal, surpoids, obésité).

8. **Objectif : Développer une fonction en C qui calcule la distance entre deux points, soit dans un espace 2D, soit dans un espace 3D.**
   - Fonctionnalité : La fonction doit permettre de calculer la distance euclidienne entre deux points. Pour l'espace 2D, la distance est calculée en utilisant les coordonnées (x, y) des points. Pour l'espace 3D, la distance utilise les coordonnées (x, y, z).
   - Paramètres de la Fonction : Coordonnées du premier point (double x1, double y1, double z1 pour 3D ; double x1, double y1 pour 2D) et coordonnées du second point (double x2, double y2, double z2 pour 3D ; double x2, double y2 pour 2D).
   - Logique de la Fonction : Utiliser la formule de la distance euclidienne, en 2D (√((x2 - x1)² + (y2 - y1)²)) et en 3D (√((x2 - x1)² + (y2 - y1)² + (z2 - z1)²)).
   - Scénario de Test : Pour 2D, calculer la distance entre les points (1, 2) et (4, 6). Pour 3D, calculer la distance entre les points (1, 2, 3) et (4, 6, 8) et vérifier si les distances sont correctes.

9. **Créer une fonction en C pour trier un tableau d'entiers.**
   - Fonctionnalité : La fonction doit réorganiser les éléments d'un tableau d'entiers de sorte qu'ils soient dans un ordre croissant (ou décroissant). On pourrait choisir un tri simple comme le tri à bulles ou le tri par sélection.
   - Paramètres de la Fonction : Un tableau d'entiers (int *tableau) et la taille du tableau (int taille).
   - Logique de la Fonction : Parcourir le tableau, comparer et échanger les éléments, et répéter le processus jusqu'à ce que le tableau soit trié.
   - Scénario de Test : Avec un tableau désordonné (par exemple, [3, 1, 4, 1, 5, 9, 2, 6, 5, 3]), vérifier si le tableau est correctement trié après l'exécution de la fonction.

10. **Développer une fonction en C qui valide une adresse email.**
    - Fonctionnalité : La fonction doit vérifier si l'adresse email fournie est dans un format valide, y compris la présence d'un caractère @, d'un domaine, et d'une extension de domaine après le @.
    - Paramètres de la Fonction : Un pointeur vers une chaîne de caractères représentant l'adresse email à valider (const char *email).
    - Logique de la Fonction : Vérifier la présence d'un '@', la structure du domaine et de l'extension, et l'absence de caractères spéciaux interdits.
    - Test : Tester avec des adresses email valides et invalides et vérifier si le résultat est correct.