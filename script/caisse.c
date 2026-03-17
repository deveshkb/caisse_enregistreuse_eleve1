#include <stdio.h>
#include <stdlib.h>

double calcule_monnaie(double donne, double prix)
{
    return donne - prix;
}

int main()
{
    double a_payer;
    double montant;
    double monnaie;

    a_payer = (rand() % 150) + 50;

    printf("Montant a payer : Rs%.2f\n", a_payer);

    do {
        printf("Montant donne : ");
        scanf("%lf", &montant);

        if (montant < a_payer) {
            printf("Montant insuffisant. Donnez plus.\n");
        }

    } while (montant < a_payer);

    monnaie = calcule_monnaie(montant, a_payer);
    printf("Monnaie a rendre : Rs%.2f\n", monnaie);

    // Déterminer billets et pièces (forte valeur d'abord)
    int reste = (int)monnaie;

    printf("Billets a rendre :\n");

    while (reste >= 200) { printf("1 billet de 200\n"); reste -= 200; }
    while (reste >= 100) { printf("1 billet de 100\n"); reste -= 100; }
    while (reste >= 50)  { printf("1 billet de 50\n");  reste -= 50;  }
    while (reste >= 25)  { printf("1 billet de 25\n");  reste -= 25;  }
    while (reste >= 10)  { printf("1 billet de 10\n");  reste -= 10;  }
    while (reste >= 5)   { printf("1 billet de 5\n");   reste -= 5;   }
    while (reste >= 1)   { printf("1 piece de 1\n");   reste -= 1;   }

    return 0;
}#include <stdio.h>
#include <stdlib.h>

int main()
{
    double a_payer;
    double montant;

    a_payer = (rand() % 150) + 50;

    printf("Montant a payer : Rs%.2f\n", a_payer);

    do {
        printf("Entrez le montant que vous donnez : ");
        scanf("%lf", &montant);

        if (montant < a_payer) {
            printf("Montant insuffisant. Donnez plus.\n");
        }

    } while (montant < a_payer);

    printf("Paiement accepte.\n");
    printf("Monnaie a rendre : Rs%.2f\n", montant - a_payer);

    return 0;
}
