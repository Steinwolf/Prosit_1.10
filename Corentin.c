#include "Corentin.h"


int fonctionPuissance(double nVP, double nP)
{
    printf("Nombre dont on veut la puissance\n");
    scanf("%lf",&nVP);                                          //Demande du nombre a la puissance
    printf("Puissance\n");
    scanf("%lf",&nP);                                           //Demande de la puissance

    printf("%lf puissance %lf = %lf\n", nVP, nP, pow(nVP,nP));  //Afficher la puissance
    return 0;
}

int fonctionSoustraction(double nSa, double nSb)
{
    printf("Nombre A\n");
    scanf("%lf",&nSa);                                  //Demande du nombre A
    printf("Nombre B\n");
    scanf("%lf",&nSb);                                  //Demande du nombre B

    printf("%lf - %lf = %lf\n", nSa, nSb, nSa-nSb);     //Afficher le résultat
    return 0;
}

int fonctionPi(int ni, double nu)
{
    nu=0.;                              //initialisation de nu
    for((ni=0);(ni<999999);(ni++))      //boucle for
    {
        if (ni%2==0)                    //boucle en fonction de u
        {
            nu+=1.0/(1.0+(2.0*ni));
        }
        else
        {
            nu-=1.0/(1.0+(2.0*ni));
        }
    }
    printf("Pi = %lf", nu*4);           //Afficher la valeur de Pi
    return 0;
}
