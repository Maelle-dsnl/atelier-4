#include <stdio.h>

#define NB_VALEURS 3

int main() {
    int valeurs[NB_VALEURS] = {8, 4, 12};

    for (int i = 0; i < NB_VALEURS; i++) {
        // Affichage initial du logigramme atelier4-etape1.png sans la boucle de croix
        printf("| %d\n", valeurs[i]);
    }
    printf("+-----------------------------------\n");

    return 0;
}
