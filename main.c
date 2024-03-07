#include <stdio.h>

float totalTTC(float totalHT, float TVA) { return totalHT * (1 + TVA / 100);}

int main() {

    char nom[20], modePaiement[20];
    float prix1, prix2, prix3, TVA, totalHT;
    char dir;

    do {
        printf("\n");
        printf("Entrer le Nom du client : ");
        scanf("%s", nom);

        do {
            printf("Prix du premier article : ");
            scanf("%f", &prix1);
            if (prix1 < 0) {
                printf("Veuillez saisir un prix valide.\n");
            }
        } while (prix1 < 0);

        do {
            printf("Prix du deuxieme article : ");
            scanf("%f", &prix2);
            if (prix2 < 0) {
                printf("Veuillez saisir un prix valide.\n");
            }
        } while (prix2 < 0);

        do {
            printf("Prix du troisieme article : ");
            scanf("%f", &prix3);
            if (prix3 < 0) {
                printf("Veuillez saisir un prix valide.\n");
            }
        } while (prix3 < 0);

        do {
            printf("Entrer le taux de la TVA (ex: 10 pour 10%%) : ");
            scanf("%f", &TVA);
            if (TVA < 0) {
                printf("Veuillez saisir un taux TVA valide.\n");
            }
        } while (TVA < 0);

        printf("Entrer le Mode de paiement (Cash/Card/Paypal) : ");
        scanf("%s", modePaiement);

        totalHT = prix1 + prix2 + prix3;

        printf("\n");
        printf("#############################\n");
        printf("\n");
        printf("Facture pour : %s\n", nom);
        printf("Total HT : %.2f\n", totalHT);
        printf("Taux de TVA : %.2f%%\n", TVA);
        printf("Montant de la TVA : %.2f\n", totalHT * TVA / 100);
        printf("Total TTC : %.2f\n", totalTTC(totalHT, TVA));
        printf("Mode de Paiement : %s\n", modePaiement);
        printf("\n");
        printf("#############################\n");
        printf("\n");
        printf("Voulez-vous creer une autre facture ? (O/N) : ");
        scanf(" %c", &dir);
        printf("-----------------------------");
    } while (dir == 'O' || dir == 'o');

    return 0;
}
