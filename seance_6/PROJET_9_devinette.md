# Devinette

Créer un programme en langage C qui choisit un nombre aléatoire entre 1 et 100 et demande à l'utilisateur de deviner le nombre en utilisant des boucles et des structures conditionnelles pour guider l'utilisateur :

## Étape 1 : Importer les bibliothèques nécessaires.

```c
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h> // Pour utiliser des booléens
```

Ces bibliothèques nous permettront d'afficher des messages à l'utilisateur, de générer des nombres aléatoires et de calculer le temps.

## Étape 2 : Déclarer les variables nécessaires.

```c
int nombreMystere, nombreEntre, compteur = 0;
const int MAX = 100, MIN = 1;
```

Ici, nous avons besoin de deux entiers : "nombreMystere" qui contiendra le nombre aléatoire généré, "nombreEntre" qui contiendra la proposition de l'utilisateur, et "compteur" qui comptera le nombre de tentatives de l'utilisateur. Nous définissons également les constantes MAX et MIN pour indiquer la plage de nombres possibles.


## Étape 3 : Générer le nombreMystere comme un nombre aléatoire entre 1 et 100.


## Étape 4: Logique de jeu

1. Initialiser une variable booléenne "trouve" à faux.
2. Utiliser une boucle "while" qui se poursuit tant que "trouve" est faux.
3. Demander à l'utilisateur de proposer un nombre et le stocker dans une variable "nombreEntre".
4. Vérifier si "nombreEntre" est égal à "nombreMystere".
5. Si "nombreEntre" est égal à "nombreMystere", mettre "trouve" à vrai pour sortir de la boucle.
6. Sinon, utiliser des instructions conditionnelles pour aider l'utilisateur à trouver le nombre mystère.
7. Répéter les étapes 3 à 6 jusqu'à ce que "trouve" soit vrai.


## Étape 5: Terminez le programme


