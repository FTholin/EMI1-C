# Jeux de la chance

Le projet commence par l'**importation des librairies**. Tout jeu de hasard implique la génération d'un nombre aléatoire.



1. Le projet possède également une variable nommée `argent` qui commence à 100. Elle représente la somme d'argent dont vous disposez actuellement. Dans chaque jeu de hasard, vous pourrez miser de l'argent. La valeur de l'argent doit changer selon que vous gagnez ou perdez le jeu.

    - À la fin du projet, nous vous demanderons d'appeler plusieurs de ces fonctions à la suite pour voir combien d'argent vous pouvez gagner. Mais c'est une bonne idée d'appeler ces fonctions pour les tester pendant que vous les créez.

Vos fonctions doivent comporter des instructions d'affichage pour aider l'utilisateur à comprendre ce qui s'est passé. 
Par exemple, dans les jeux de hasard qui impliquent de lancer des dés, vous devez afficher le résultat de ces lancers de dés. Vous devez également indiquer si le joueur a gagné ou perdu le jeu, et combien d'argent il a gagné ou perdu.

2. Créez une fonction qui simule le lancer d'une pièce de monnaie et qui annonce soit "Face", soit "Pile". 
    - Cette fonction (ainsi que toutes les autres fonctions que vous écrirez dans le cadre de ce projet) doit avoir un paramètre qui représente la somme que le joueur parie sur le tirage au sort.

Cette fonction doit également avoir un paramètre qui permet au joueur de choisir entre "Face" et "Pile".

Si le joueur gagne le jeu, la fonction doit renvoyer le montant qu'il a gagné. Si le joueur perd le jeu, la fonction doit renvoyer le montant qu'il a perdu sous la forme d'un nombre négatif.

3. Créez une fonction qui simule le jeu [Cho-Han](https://en.wikipedia.org/wiki/Ch%C5%8D-han). La fonction doit simuler le lancement de deux dés et l'addition des résultats. Le joueur prédit si la somme de ces dés est paire ou impaire et gagne si sa prédiction est correcte.
    - La fonction doit avoir un paramètre qui permet au joueur de deviner si la somme des deux dés est "impaire" ou "paire".
    - La fonction doit également comporter un paramètre permettant au joueur de parier une somme d'argent sur le jeu.
