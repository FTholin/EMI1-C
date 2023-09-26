# Les opérateurs

## Vue d'ensemble

Dans cette leçon, vous allez apprendre à:


- à effectuer des opérations mathématiques de base sur des variables et des valeurs en utilisant des symboles courants.
- attribuer des valeurs aux variables et/ou effectuer des opérations mathématiques de base en utilisant des opérations abrégées.
- comparer deux valeurs et/ou variables l'une par rapport à l'autre pour renvoyer un vrai/faux.
utiliser des opérateurs logiques (et, ou, et non).

Dans la leçon précédente, vous avez appris comment créer et définir des variables, mais pas ce que vous pouvez faire avec elles au-delà. Dans cette leçon, vous apprendrez à modifier les variables grâce à la puissance des mathématiques, à utiliser des méthodes d'affectation abrégées et à comparer des variables et des valeurs. Enfin, nous verrons comment utiliser les opérateurs logiques "et", "ou" et "non".


## Opérations mathématiques

À la base, les ordinateurs sont des calculatrices sophistiquées. Il est donc utile d'apprendre à effectuer des opérations mathématiques de base dès le début de votre développement linguistique.

L'addition et la soustraction fonctionnent exactement comme vous vous y attendez. `a = 2 + 3` stockera `5` dans la variable `a`. Vous pouvez également utiliser ces variables comme partie du calcul (ou tout le calcul).

```c
int a = 2;
int b = 3;
int c = a + b;
```

Ces mêmes principes fondamentaux des mathématiques sont valables pour la soustraction, la multiplication et la division.

### À vous de jouer ! 🤠

1. Nous pouvons maintenant ajouter un peu de saveur à notre connaissance des variables. Le programme ci-dessous comporte déjà la déclaration des variables et certaines valeurs, ainsi que la sortie permettant d'afficher les résultats finaux.

    - Votre tâche consiste à modifier les valeurs stockées dans les variables en utilisant des symboles mathématiques de base, compte tenu des changements.

    - C'était une bonne semaine, vous avez vendu 200 livres de plus ! Mettez à jour la variable `livres_vendus` en conséquence.


2. Maintenant que vous disposez du nombre de livres vendus mis à jour, calculez la valeur totale des ventes.


3. Votre éditeur prend la moitié du total des ventes dans le cadre de sa commission.
    - Mettez à jour votre `valeur_total_ventes` en conséquence (vous pouvez le faire avec une multiplication ou une division dans le monde réel, mais pour la pratique, veuillez utiliser la division).

```c
#include <stdio.h>

int main() {

    // Variables définies pour vous, ne pas changer ici
    int livres_vendus = 100 ;
    double prix_livre = 9.99 ;
    double valeur_total_ventes ;

    // Apportez vos modifications ici


    // Affichage des variables, inutile de la modifier
    printf("Vous avez vendu %d livres et votre recette est de $%.2f\n", livres_vendus, valeur_total_ventes) ;
}
```

## Modulo

Vous avez peut-être déjà rencontré le **modulo**, symbolisé par le symbole du pourcentage `%`. Si ce n'est pas le cas, ou pour rappel, le modulo effectue une division mais au lieu de vous donner le nombre de fois que le dénominateur entre dans le numérateur, il vous **donne le reste après la division**.

Par exemple, si vous prenez `10 / 3`, vous obtenez `3` et il reste `1`. Si vous vouliez simplement obtenir le reste sans vous soucier de l'autre partie, vous feriez `10 % 3`. Vous obtiendrez alors `1`.

Une utilisation courante du modulo consiste à déterminer si un nombre entier est pair ou impair. Si nous disposons d'un nombre entier, x, et que nous ne savons pas s'il est pair ou impair, nous pouvons utiliser la modulo pour connaître le reste. Si le résultat est 1, x est impair, sinon il est pair.

```c
#include <stdio.h>

int main() {
    int jours = 30;
    // Ici Nous partons du principe que Lundi correspond à 0, Mardi à 1, ..., Dimanche à 7
    int jour_semaine = jours % 7;
    printf("%d\n", jour_semaine);
    return 0;
}
```

## Incrément et décrément

Le langage C dispose de plusieurs raccourcis que vous pouvez utiliser pour vous faciliter la vie.

Par exemple, il est très courant dans une boucle d'avoir un compteur que vous voulez **incrémenter** (ajouter 1) ou **décrémenter** (soustraire 1) à chaque passage.

Le C vous permet de le faire en utilisant un symbole double, par exemple :

```c
int a = 1 ;
a++ ;
```

La valeur de `a` serait alors de `2`.

L'abréviation pour décrémenter est `--` au lieu de `++`.

Donc, si nous voulions décrémenter `a`, ce serait :

```c
a-- ;
```

### À vous de jouer ! 🤠

1. Décrémentez `m`.

2. Faites maintenant l'inverse  pour `n`.

```c
#include <stdio.h>

int main() {
  int n = 13;
  int m = 10;

  printf("m = %d\n", m);
  printf("n = %d\n", n);
}
```

## Affectation

C'est une chose d'effectuer toutes ces opérations, mais si les résultats sont jetés dès la fin de l'exécution de l'instruction, l'ensemble du processus a une utilité limitée. Ce dont nous avons besoin, c'est d'un moyen d'attribuer des valeurs aux variables. Nous avons déjà vu la manière de base de le faire en utilisant `=`, mais le C offre quelques astuces supplémentaires pour l'affectation.

Chacun des symboles mathématiques de base que vous avez appris dans cette leçon peut être réalisé en C avec un raccourci.

Examinons un exemple de deux façons d'écrire des additions simples qui vous donneraient le même résultat final :

```c
int a = 2;
int b = 3;
a = a + b;
```

Cela pourrait également être écrit comme suit

```c
int a = 2 ;
int b = 3 ;
a += b ;

```


Remarquez que le C nous permet d'utiliser `+=` comme raccourci pour ajouter quelque chose à la valeur de départ d'une variable.

Vous pouvez utiliser ce même raccourci avec `-=`, `*=`, `/=` et `%=` pour la soustraction, la multiplication, la division et le modulo, respectivement.


### À vous de jouer ! 🤠

1. Dans l'exemple, nous avons montré comment définir une variable sur elle-même plus une autre variable. Dans le bloc de code de ci-dessous , trouvez le total des pertes en multipliant les pertes par `minutes_serveur_hs` en utilisant la méthode abrégée.

2. Vous découvrez que les pertes calculées  étaient beaucoup trop élevées, en fait, elles ont été estimées à deux fois ce qu'elles sont en réalité ! Mettez à jour vos pertes pour qu'elles soient la moitié de ce que vous venez de calculer à l'étape précédente (toujours en utilisant la méthode abrégée).


```c
#include <stdio.h>

int main() {

  int minutes_serveur_hs = 5 ;
  double pertes = 500.95 ;


  printf("Perte totale : $%.2f\n", pertes) ;
}
```

## Comparaisons

Vous n'avez pas encore appris les instructions qui vérifient et répondent à des valeurs vrai/faux (appelées booléennes), mais puisque nous parlons de symboles arithmétiques, nous voulions vous donner une introduction aux symboles utilisés pour ces vérifications.

Vous pouvez vérifier si deux valeurs sont égales `==` (remarquez qu'il y a des doubles `=` pour vérifier l'équivalence plutôt que le symbole unique utilisé pour l'affectation), non égales `!=`, supérieures à `>`, supérieures ou égales à `>=`, inférieures à `<`, et inférieures ou égales à `<=`.

À titre d'exemple, si vous vouliez exécuter un segment de code si a avait la même valeur que b, vous pourriez l'écrire comme suit :

```c
int a = 3 ;
int b = 3 ;
if (a == b) {
  a++ ;
}
```

Remarquez dans ce code qu'à la fin, `a` serait égal à `4`.

## Opérateurs logiques

Vous ne devez pas vous contenter de vérifier une partie à la fois lorsque vous effectuez vos comparaisons. C vous permet de voir si deux parties ou plus sont vraies, si au moins une est vraie, ou si quelque chose n'est pas vrai. Nous avons déjà vu un exemple rapide avec `!=`, qui vérifie si le côté gauche n'est pas égal au côté droit, mais `!` devant n'importe quel booléen permet de vérifier si l'instruction n'est pas vraie. Vous en apprendrez davantage à ce sujet lorsque vous étudierez les instructions booléennes en général.

Si vous voulez vérifier si deux ou plusieurs parties sont vraies, vous pouvez utiliser `&&` entre elles. Si vous voulez vérifier si l'une des parties est vraie, vous pouvez utiliser `||`. Pour voir les deux en action, voici un exemple trivial :

```c
int a = 2 ;
int b = 3 ;
if (a == b && a == 2) {
  printf("les deux sont vrais") ;
}
if (a == b || a == 2) {
  printf("l'un ou les deux sont vrais") ;
}
if ( !(a == b)) {
  printf("ils ne sont pas égaux") ;
}
```

Dans cet exemple, seuls les deuxième et troisième énoncés seront évalués comme vrais. La deuxième déclaration sera vraie parce que `a` n'est pas égal à `b` mais est égal à `2`.

N'oubliez pas qu'une seule des parties doit être évaluée comme vraie lorsque vous utilisez `||`. La dernière déclaration sera vraie parce que la vérification interne de l'égalité donnera un résultat faux et que nous prendrons l'opposé de ce résultat avec `!`.

## Ordre des opérations

Le langage C ne traite pas les instructions que vous lui envoyez aveuglément, de gauche à droite. Il examine les instructions et applique des règles standard pour déterminer l'ordre dans lequel les instructions doivent être traitées. Par exemple, il effectuera une multiplication avant une addition.

Il existe de nombreux autres symboles et opérations que vous apprendrez au fur et à mesure que vous progresserez dans votre connaissance du C, mais voici une liste de l'ordre des opérations que nous avons abordées dans cette leçon.

En regardant le tableau ci-dessous, les opérations de priorité 1 seront effectuées en premier. Ensuite, les opérations de priorité 2, 3, et ainsi de suite seront traitées. Pour les opérateurs de même niveau de priorité, les opérations se déroulent de gauche à droite.

```
Priorité	Symbole
1       	++
1	       --
1           ()
2	       !
2	       (transtypage)
3	       *
3	       /
3	       %
4	       +
4	       -
5	       <, <=
5	       >, >=
6	       ==, !=
7	       &&
8	       ||
9	       Tous les opérateurs d'assignation
```

### À vous de jouer ! 🤠


1. Le code de droite utilise l'ordre des opérations décrit ci-dessus, donc pour la variable `x`, il effectuera d'abord la multiplication puis l'addition. Cependant, nous voulons que l'addition ait lieu en premier.

    - Veuillez corriger la ligne de code pour indiquer au compilateur de faire l'addition en premier pour l'évaluation en x.


2. Maintenant, jetez un coup d'oeil à l'équation `y` et remarquez qu'elle fera la division en premier, et en tant qu'int, elle sera convertie en `0`, puis ajoutera `6`. Mettez à jour la ligne pour qu'elle fasse d'abord l'addition et qu'elle se résolve en `0` (en tant qu'int).

```c
#include <stdio.h>

int main() {

    int x;
    int y;

    x = 2 + 3 * 5;
    y = 2 / 4 + 6;

    printf("x is: %d\n", x);
    printf("y is: %d\n", y);
}
```
