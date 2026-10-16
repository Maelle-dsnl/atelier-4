#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50

int main() {
    int valeurs[NB_VALEURS] = {8, 4, 12};

    // 1. Recherche du maximum
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++) {
        if (valeurs[i] > maximum) {
            maximum = valeurs[i];
        }
    }

    // 2. Affichage avec mise à l'échelle
    for (int i = 0; i < NB_VALEURS; i++) {
        printf("| ");
        // Calcul du nombre de 'X' proportionnel à MAX_LONGUEUR
        int nb_croix = (valeurs[i] * MAX_LONGUEUR) / maximum;
        
        for (int j = 0; j < nb_croix; j++) {
            printf("X");
        }
        printf(" %d\n", valeurs[i]);
    }
    printf("+-----------------------------------\n");

    return 0;
}