

**Activité : Vérification de Palindrome en C**

**Objectif :** Programmer en C un outil qui vérifie si une entrée utilisateur est un palindrome.

**Étapes détaillées :**


1. **Inclure les bibliothèques :** 
   ```c
   #include <stdio.h>
   #include <string.h>
   #include <stdbool.h>
   ```

2. **Déclarer les variables :**
   - Un tableau de caractères pour le mot de l'utilisateur.
   - Une variable pour la longueur du mot.
   - Un booléen pour le résultat de la vérification.
		```c
		bool variable_bool = true; // Peut être aussi égale à false
		````

3. **Lecture du mot :**
   - Inviter l'utilisateur à entrer un mot.
   - Lire le mot avec `scanf`, en limitant la taille pour éviter le dépassement.
   - Stocker la longueur du mot avec `strlen`.

4. **Vérifier le palindrome :**
   - Initialiser le booléen à `true`.
   - Comparer les caractères aux positions symétriques avec une boucle `for`.
		- va parcourir la moitié du mot (la division entière de la longueur du mot par 2). 
		- Pour chaque itération, vous comparez le caractère à la position i (début du mot) avec le caractère à la position n-i-1 (fin du mot). Si une paire de caractères est différente, le mot n'est pas un palindrome.
   - Si une paire de caractères ne correspond pas, mettre le booléen à `false`.
   - Utiliser la longueur du mot pour déterminer les indices des caractères à comparer.

5. **Résultat :**
   - Informer l'utilisateur si le mot est un palindrome ou non en utilisant `printf`.

