# Formule Quadratique

En algèbre, une équation quadratique est une équation ayant la forme :

$$ax^2 +bx + c = 0$$

Les valeurs x correspondantes sont les ordonnées du graphique, tandis que a, b et c sont des constantes.

Écrivez un programme C qui résout l'équation quadratique pour les x :

$$x=\frac{-b\pm \sqrt{b^2-4ac}}{2a}.$$


## A vous de jouer ! 🧩 🎮

### Mise en place

0. Récupérer le squelette de la fonction avec sa bibliothèque.
```c
#include <stdio.h>

int main()
{
    // Votre code ci-dessous

    return 0;
}
```

### Variables dont on a besoin

1. Déclarons 3 variables :
  - `a` pour le nombre a
  - `b` pour le nombre b
  - `c` pour le nombre c

  Celles-ci doivent pouvoir contenir des nombres décimaux.
  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  Le type de données ici doit être double (et non int).

  Vous pouvez déclarer trois variables doubles comme suit :

  ```cpp
  double a;
  double b;
  double c;
  ```

  ou

  ```cpp
  double a, b, c;
  ```

  </p>
  </details>


2. Invitez l'utilisateur à saisir le nombre `a` avec `scanf` et printf :

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  ```c
  int n;
  printf("Entrez un entier : ");
  scanf("%d", &n);
  ```

  </p>
  </details>


3. Réalisez le même processus pour les variables `b` et `c`.


4. Déclarons deux variables pour stocker les racines :
  - `racine1`
  - `racine2`

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  Le type de données ici doit être double (et non int).

  Vous pouvez déclarer trois variables doubles comme suit :

  ```c
  double racine1;
  double racine2;
  ```

  ou

  ```c
  double racine1, racine2;
  ```

  </p>
  </details>

### Résolution du challenge

5. Il y a deux racines ici : Pour la racine 1, l'équation a un signe `+` :

$$racine1=\frac{-b +\sqrt{b^2-4ac}}{2a}$$

  Utilisez les opérateurs mathématiques de C pour résoudre la racine1.

  **Remarque** : vous pouvez utiliser `sqrt( double value );
` pour obtenir la racine carrée d'un nombre.

  `sqrt( double value );` est une fonction C intégrée à laquelle vous avez accès en incluant la bibliothèque `<math.h> ` en haut du fichier. Par exemple, `sqrt(9.0)` serait égal à **3.0**.


6. Pour la racine 2, c'est presque identique mais l'équation a un signe - :


7. Affichons ces valeurs en utilisant `printf`.

8. Éxécutez le programme.

  Tapez `6`, `-7`, `-3` pour `a`, `b`, et `c` :

  ```
  Saisir a: 6
  Saisir b: -7
  Saisir c: -3
  Racine 1 égale à 1.5
  Racine 2 égale à -0.333333
  ```


```c
#include <stdio.h>
#include <math.h>

int main()
{
  // Votre code ci-dessous

  return 0;
}
```
