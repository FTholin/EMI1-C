# Des années de chien

*Quel âge peut avoir votre ami à poils en années humaines ?*

Les chiens vieillissent à un rythme plus rapide que les êtres humains. Si vous possédez un chien, vous avez peut-être entendu cette règle : un an pour un chien équivaut à sept ans pour vous.

Il s'avère que le calcul n'est pas aussi simple. Les chiens mûrissent plus rapidement que nous au début.

Voici comment convertir l'âge de votre chien en années humaines :

- Les **deux premières années** de la vie d'un chien comptent pour **21 années humaines**.

- Chaque **année suivante** compte pour **4 années humaines**.


Ainsi, un **chien d'un an** a **10,5 ans** en années humaines, et un **chien de deux ans** a **21 ans** en années humaines... hmm, cela va devenir plus compliqué.

Avant de commencer à faire les calculs dans votre tête, laissez un ordinateur s'en charger !

Écrivez un programme C pour calculer l'âge, en années humaines, de tout chien de plus de 2 ans.


## A vous de jouer ! 🧩 🎮

### Mise en place


1. À la première ligne, inclure la bibliothèque de base pour les entrées & sorties.

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  ```c
  #include <stdio.h>
  ```
  </p>
  </details>


 3. Créez à la suite la fonction principale avec ses accolades.

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  ```c
  int main() {

   // Votre code ci-dessous entre les accolades

  }
  ```

  </p>
  </details>


### Variables dont on a besoin

4. Déclarez et initialisez une variable entière `age_chien` avec la valeur entière de votre choix.

5. Écrivez un commentaire qui explique cette ligne de code.

  **Remarque** : Pour plus de simplicité, cette version du programme est destinée aux chiens âgés de plus de 2 ans.

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  ```c
  // L'âge de mon chien
  int age_chien = 8;
  ```
  </p>
  </details>

<br />

6. Déclarons 3 autres variables entières:
  - `jeunes_annees_chien`
  - `annees_chien_maturite`
  - `annees_humain`

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  - possibilité de le faire en une ligne:

  ```c
  int jeunes_annees_chien, annees_chien_maturite, annees_humain;
  ```

  - possibilité de le faire séparément:

  ```c
  int jeunes_annees_chien;
  int annees_chien_maturite;
  int annees_humain;
  ```

  </p>
  </details>


### Résolution du challenge

*Les deux premières années de la vie d'un chien comptent pour 21 années humaines.*

7. Donnons à la variable `jeunes_annees_chien` une valeur de `21` . Écrivez un commentaire qui explique cette ligne de code.

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  ```c
  // Les 2 premières années
  jeunes_annees_chien = 21;
  ```

  </p>
  </details>

>Chaque année suivante compte pour 4 années humaines.

8. Donnez à votre variable le résultat de l'équation  :

  `annees_chien_maturite = (age_chien - 2) * 4`

9. Additionnez `jeunes_annees_chien` et `annees_chien_maturite`, et stockez le tout dans la variable nommée `annees_humain`.
Rédigez un commentaire expliquant cette ligne de code.

  <details>
  <summary>J'ai besoin d'aide ! 😱</summary>
  <p>

  ```c
  annees_humain = jeunes_annees_chien + annees_chien_maturite;
  ```

  </p>
  </details>


10. Écrivez une instruction `printf` qui affiche le nom de votre chien et son âge en années humaines.

  `Mon nom est ____ ! Je suis âgé de ___ ans en années humaines.`

  Vous pouvez remplir l'espace vide avec le nom de votre chien ou `Médor` et l'autre  avec la valeur de `annees_humain` dans la phrase ci-dessus.
