#include "Adrien.h"

    //La multiplication
int fonctionMultiplication (double nombre1, double nombre2)
{
    double sortie;
    sortie = nombre1 * nombre2;
    printf("Le resultat est %lf\n", sortie);
    return 0;
}

    //Le polynome du second degre
int fonctionPolynomeSecondDegre (double a, double b, double c, double delta, double x1, double x2)
{
    delta = b*b-4*a*c;
    printf("delta = %lf\n", delta);

    if (delta<0)
    {
        printf("Delta est inferieur à 0, donc il n'y a pas de racine\n");
    }

    if (delta==0)
    {
        printf("Delta est egale à 0, il y a donc une solution\n");
        x1 = -b/(2*a);
        printf("x0 = %lf", x1);
    }

    if (delta>0)
    {
        printf("Delta est superieur à 0, il y a deux solution\n");
        x1 = (-b-sqrt(delta))/2*a;
        x2 = (-b+sqrt(delta))/2*a;
        printf("x1 = %lf  x2 = %lf", x1, x2);
    }

    return 0;
}

int fonctionRacineCarree (double compteur, double tour)
{
    float sortie=1;

    tour = nombreSousLaRacine/2;
    for(compteur=1; compteur<tour; compteur++)
        {
            sortie = (sortie + nombreSousLaRacine / sortie) / 2;
        }
    return sortie;
}
