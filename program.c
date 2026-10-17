#include <stdio.h>

#define NB_VALEURS 3
#define MAX_LIGNES 15
#define PAS_GRADUATION 5  

void afficher_ligne_histov(int tableau[], int taille, double y, int graduee);
void afficher_axe_x(int tableau[], int taille);

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
        int graduee = (i % PAS_GRADUATION == 0);
        afficher_ligne_histov(valeurs, NB_VALEURS, y, graduee);
    }
    afficher_axe_x(valeurs, NB_VALEURS);
    return 0;
}

void afficher_ligne_histov(int tableau[], int taille, double y, int graduee)
{
    char remplissage = ' ';
    if (graduee)
    {
        printf("%5.1f |", y);
        remplissage = '.';
    }
    else
    {
        printf("      |");
    }
    printf("%c", remplissage);

    for (int k = 0; k < taille; k++)
    {
        if (tableau[k] >= y)
        {
            printf("xxx");
        }
        else
        {
            printf("%c%c%c", remplissage, remplissage, remplissage);
        }
        printf("%c", remplissage);
    }
    printf("\n");
}

void afficher_axe_x(int tableau[], int taille)
{
    printf("      +");
    for (int k = 0; k <= taille; k++)
    {
        printf("----");
    }
    printf("\n        ");
    for (int k = 0; k < taille; k++)
    {
        printf("%3d ", tableau[k]);
    }
    printf("\n");
}