#include <stdio.h>
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
