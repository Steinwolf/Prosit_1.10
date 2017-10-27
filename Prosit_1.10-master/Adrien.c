#include "Adrien.h"

    //La multiplication
int fonctionMultiplication ()
{
    double nombre1, nombre2;
    printf("Veuillez choisir le nombre 1");
    scanf("%lf", &nombre1);
    printf("Veuillez choisir le nombre 2");
    scanf("%lf", &nombre2);
    printf("Le resultat est %lf\n", nombre1*nombre2);

    return 0;
}

    //Le polynome du second degre
int fonctionPolynomeSecondDegre ()
{
    double a, b, c, delta, x1, x2;
    printf("Veuillez choisir a");
    scanf("%lf", &a);
    printf("Veuillez choisir b");
    scanf("%lf", &b);
    printf("Veuillez choisir c");
    scanf("%lf", &c);

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
    //Racine carre
int fonctionRacineCarre()
{
    double nombreSousRacine;
    printf("Veuillez choisir le nombre sous la racine");
    scanf("%lf", &nombreSousRacine);
    double sortie=1;
    int compteur;

    for((compteur=0);(compteur < (nombreSousRacine/2));(compteur++))
    {
        sortie=(sortie+(nombreSousRacine/sortie))/2;
    }
    return 0;
}
