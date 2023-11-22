# Bureau des censures 


## Créer un programme de censure de mots avec les pointeurs en C :

Voici un programme en langage C qui permet de censurer des mots spécifiques dans une phrase en utilisant des pointeurs. Voici comment cela fonctionne :

1. **Déclaration des mots à censurer** :
   - Pour commencer, nous déclarons une chaîne de caractères qui contient les mots à censurer. Dans cet exemple, nous avons une liste de 3 mots stockés dans un tableau multidimensionnel. La variable `nb_mots` indique le nombre de mots présents dans ce tableau.

2. **Déclaration de la phrase à censurer** :
   - Nous réservons de l'espace en mémoire en déclarant une chaîne de caractères appelée `phrase` pour stocker la phrase à censurer. Dans cet exemple, nous avons alloué de l'espace pour 100 caractères, ce qui signifie que la phrase à censurer ne peut pas dépasser 99 caractères, plus le caractère nul de fin de chaîne (`'\0'`).

3. **Saisie de la phrase à censurer avec `scanf()`** :
   - Pour obtenir la phrase à censurer de l'utilisateur, nous utilisons la fonction `scanf()`. Le format `"%99[^\n]%*c"` est utilisé pour lire jusqu'à 99 caractères (afin d'éviter un dépassement de la taille du tableau `phrase`) jusqu'à ce qu'un caractère de nouvelle ligne (`'\n'`) soit rencontré. Le caractère `%*c` permet de consommer ce caractère de nouvelle ligne restant dans la mémoire tampon d'entrée.

4. **Recherche et censure des mots** :
   - Pour chaque mot à censurer, nous parcourons la phrase à la recherche de toutes les occurrences de ce mot que nous souhaitons censurer.
   - Nous utilisons une boucle `for` pour itérer à travers la liste des mots à censurer.
   - Pour chaque mot, nous utilisons la fonction `strstr()` pour trouver la première occurrence de ce mot dans la phrase.
   - Si le mot est trouvé, nous utilisons des pointeurs pour accéder à chaque caractère du mot et le remplacer par un astérisque (`*`) dans la phrase.
   - Après avoir effectué la censure, le pointeur `ptr` est incrémenté de la longueur du mot à censurer afin de poursuivre la recherche dans la phrase.

5. **Affichage de la phrase censurée** :
   - Enfin, nous affichons la phrase censurée à l'utilisateur en utilisant `printf()`. À ce stade, la phrase a été modifiée pour remplacer les mots à censurer par des astérisques (`*`).

Ce programme démontre l'utilisation de pointeurs pour parcourir une chaîne de caractères, identifier des mots spécifiques, et effectuer des remplacements lorsque ces mots sont trouvés. La technique de saisie avec `scanf()` permet de gérer correctement les espaces et les caractères spéciaux dans la phrase saisie par l'utilisateur.
