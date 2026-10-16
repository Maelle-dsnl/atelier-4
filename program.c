#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LONGUEUR 50 // Représente la taille de la plus grande barre

int main() {
    int valeurs[NB_VALEURS] = {8, 4, 12};

    // 1. Recherche du maximum
    int maximum = valeurs[0];
    for (int i = 1; i < NB_VALEURS; i++) {
        if (valeurs[i] > maximum) {
            maximum = valeurs[i];
        }
    }

    // 2. Calcul de la variable echelle en float (on force le .0f pour éviter la division entière)
    float echelle = (float)MAX_LONGUEUR / (float)maximum;

    // 3. Affichage avec mise à l'échelle
    for (int i = 0; i < NB_VALEURS; i++) {
        printf("| ");
        
        // Calcul du nombre de croix avec la variable echelle
        int nb_croix = (int)(valeurs[i] * echelle + 0.5f);
        
        for (int j = 0; j < nb_croix; j++) {
            printf("X");
        }
        printf(" %d\n", valeurs[i]);
    }
    printf("+-----------------------------------\n");

    return 0;
}