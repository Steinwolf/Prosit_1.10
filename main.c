#include <stdio.h>
#include <stdlib.h>
#include "Adrien.h"
#include "Alexandre.h"
#include "Corentin.h"
#include "Francois.h"
#include "PierreLoup.h"


int main()
{
    /*float nombreSousLaRacine,nombreNRacineCarre;
    int compteur,tour;
    float sortie=1;
    scanf("%f %f", &nombreSousLaRacine, &nombreNRacineCarre);

    tour = nombreSousLaRacine;
    for(compteur = 1; compteur < tour; compteur++) // Cette boucle for égal une racine Nième mais la fonction sqrt n'existe pas en C
        {
            sortie = (sortie + nombreSousLaRacine / sortie) / nombreNRacineCarre;
        }
    printf("%f",sortie);
    return sortie;*/
    /*int sortie, reste, nombre1, nombre2;
    printf("Veuillez choisir les deux nombres qui sont a diviser : ");
    scanf("%d \n %d", &nombre1, &nombre2);
    sortie = nombre1 / nombre2;
    reste = nombre1 % nombre2;
    printf("Le reste de la division est :%d\n", reste);
    printf("Le resultat est :%d\n", sortie);
    return 0;*/
    int nombre1, temporaire, nombre2;
    printf("Veuillez donner les deux nombres dont vous voullez trouver le plus grand diviseur : \n");
    scanf(" %d \n %d", &nombre1, &nombre2);

do {

 if (nombre1 < nombre2) // La boucle permet d'inverser les deux nombres a l'aide d'une variable temporelle.

{

 temporaire = nombre1;

 nombre1 = nombre2;

 nombre2 = temporaire;

}

nombre1 = nombre1 - nombre2;

} while (nombre1); // while s'execute tant que l'expression est different de 0.
printf ("Le resultat du PGCD est :%d", nombre2);
return 0;
/*
 int sortie, reste, nombre1, nombre2;
    printf("Veuillez choisir les deux nombres qui sont a diviser : ");
    scanf("%d \n %d", &nombre1, &nombre2);
    sortie = nombre1 / nombre2;
    reste = nombre1 % nombre2;
    printf("Le reste de la division est :%d\n", reste);
    printf("Le resultat est :%d\n", sortie);
    return 0;*/


}
