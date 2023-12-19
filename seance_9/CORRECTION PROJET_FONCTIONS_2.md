

### Calculatrice de Base

1. **Importation des librairies et définition des fonctions**
    ```c
    #include <stdio.h>

    double addition(double nb1, double nb2) {
        return nb1 + nb2;
    }

    double soustraction(double nb1, double nb2) {
        return nb1 - nb2;
    }

    double multiplication(double nb1, double nb2) {
        return nb1 * nb2;
    }

    double division(double nb1, double nb2) {
        if (nb2 != 0) {
            return nb1 / nb2;
        } else {
            printf("Erreur : Division par zéro\n");
            return 0;
        }
    }

    void afficher_menu() {
        printf("Menu de la calculatrice :\n");
        printf("1. Addition\n");
        printf("2. Soustraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Quitter\n");
    }
    ```

2. **Fonction principale**
    ```c
    int main() {
        int choix;
        double a, b, resultat;

        while (1) {
            afficher_menu();
            printf("Entrez votre choix : ");
            scanf("%d", &choix);

            if (choix == 5) break;

            printf("Entrez le premier nombre : ");
            scanf("%lf", &a);
            printf("Entrez le deuxième nombre : ");
            scanf("%lf", &b);

            switch (choix) {
                case 1:
                    resultat = addition(a, b);
                    break;
                case 2:
                    resultat = soustraction(a, b);
                    break;
                case 3:
                    resultat = multiplication(a, b);
                    break;
                case 4:
                    resultat = division(a, b);
                    break;
                default:
                    printf("Choix invalide\n");
                    continue;
            }

            printf("Résultat : %lf\n", resultat);
        }

        return 0;
    }
    ```

### Conversion de Devises

1. **Importation des librairies et définition des fonctions**
    ```c
    #include <stdio.h>

    void afficher_menu_devises() {
        printf("Choisissez la devise de base :\n");
        printf("1. Euro (EUR)\n");
        printf("2. Dollar Américain (USD)\n");
        printf("3. Livre Sterling (GBP)\n");
        printf("4. Yen Japonais (JPY)\n");
        printf("5. Quitter\n");
    }

    int lire_choix() {
        int choix;
        printf("Entrez votre choix : ");
        scanf("%d", &choix);
        return choix;
    }

    double saisir_montant() {
        double montant;
        printf("Entrez le montant à convertir : ");
        scanf("%lf", &montant);
        return montant;
    }

    double convertir(double montant, int devise_base, int devise_cible) {
        double taux_conversion[4][4] = {
            {1.0, 1.12, 0.85, 129.15},
            {0.89, 1.0, 0.76, 114.98},
            {1.18, 1.32, 1.0, 151.23},
            {0.0077, 0.0087, 0.0066, 1.0}
        };

        return montant * taux_conversion[devise_base - 1][devise_cible - 1];
    }
    ```

2. **Fonction principale**
    ```c
    int main() {
        int devise_base, devise_cible;
        double montant, montant_converti;

        while (1) {
            afficher_menu_devises();
            devise_base = lire_choix();
            if (devise_base == 5) break;

            afficher_menu_devises();
            devise_cible = lire_choix();
            if (devise_cible == 5) break;

            montant = saisir_montant();

            montant_converti = convertir(montant, devise_base, devise_cible);
            printf("Montant converti : %lf\n", montant_converti);
        }

        return 0;
    }
    ```
