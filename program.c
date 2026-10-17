#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LIGNES 15

void afficher_ligne_histov(int tableau[], int taille, double y);

int main()
{
    int valeurs[NB_VALEURS] = { 8, 4, 12 };

    int maximum = valeurs[0];
    for (int j = 1; j < NB_VALEURS; j++)
    {
        if (valeurs[j] > maximum)
        {
            maximum = valeurs[j];
        }
    }

    for (int i = 0; i < MAX_LIGNES; i++)
    {
        double y = (double)maximum * (MAX_LIGNES - i) / MAX_LIGNES;
        afficher_ligne_histov(valeurs, NB_VALEURS, y);
    }
    printf("+---------------------------------------\n");
    return 0;
}

void afficher_ligne_histov(int tableau[], int taille, double y)
{
    printf("| ");
    for (int k = 0; k < taille; k++)
    {
        if (tableau[k] >= y)
        {
            printf("xxx ");
        }
        else
        {
            printf("    ");
        }
    }
    printf("\n");
}
