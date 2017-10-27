#include "PierreLoup.h"

// Fonction qui effectue la somme de deux nombres demandés dans les paramètres

int fonctionAddition()
{
    double nombre1=0., nombre2=0.;
    double sortie;
    printf("\nEntrez un premier nombre :");
    scanf("%lf",&nombre1);
    printf("\nEntrez un deuxieme nombre :");
    scanf("%lf",&nombre2);

    sortie = nombre1 + nombre2;
    printf("%lf",sortie);
    return 0;
}

int fonctionFactoriel(int nombre)
{
    unsigned long sortie;

    if (nombre > 12)  /* Si le nombre entré est superieur à 12,
    il y aurait un dépassement de capacité, c'est pourquoi on affiche un message d'erreur.*/
    {
        printf("\nErreur : Depassement de Capacite");
        return 0;
    }
    else
    {
       if (nombre==0)
        {
            sortie=1;
        }
        else;
        {
            sortie=nombre*fonctionFactoriel(nombre-1);
        }
    printf("%lu",sortie);
    }
return 0;
}
