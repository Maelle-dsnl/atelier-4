#include <stdio.h>

#define NB_VALEURS 3

int main() {
    int valeurs[NB_VALEURS] = {8, 4, 12};

    for (int i = 0; i < NB_VALEURS; i++) {
        printf("|");
        // Boucle pour afficher 'X' autant de fois que la valeur
        for (int j = 0; j < valeurs[i]; j++) {
            printf("X");
        }
        // Affichage de la valeur numérique après les X
        printf(" %d\n", valeurs[i]);
    }
    printf("+-----------------------------------\n");

    return 0;
}