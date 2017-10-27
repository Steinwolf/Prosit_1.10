#include "Alexandre.h"

int fonctionRacineNieme() //nombre1 est le nombre sous la racine carré et le nombre2 est le N racine carré.
{
    float nombreSousLaRacine, nombreNRacineCarre;
    int compteur,tour;
    float sortie=1;
    printf("Veuillez choisir le nombre qui va etre sous la racine carré");
    scanf("%f", &nombreSousLaRacine);
    printf("Veuillez choisir le nombre qui est le N la racine carré");
    scanf("%f", &nombreNRacineCarre);
    tour = nombreSousLaRacine; // Le nombre tour est egal au nombre sous la racine Nième pour être sûr que la boucle POUR tourne assez longtemps
    for(compteur=1; compteur<tour; compteur++) // Cette boucle for égal une racine Nième mais la fonction sqrt n'existe pas en C
        {
            sortie = (sortie + nombreSousLaRacine / sortie) / nombreNRacineCarre;
        }
    printf("%f", sortie);
    return 0;
}

int fonctionDivisionEuclidienne()
{
    int sortie, reste, nombre1, nombre2;

    printf("Veuillez choisir les deux nombres qui sont a diviser : ");
    scanf("%d \n %d", &nombre1, &nombre2);
    sortie = nombre1 / nombre2;
    reste = nombre1 % nombre2;
    printf("Le reste de la division est :%d\n", reste);
    printf("Le resultat est :%d\n", sortie);
    return 0;
}

int fonctionPGCD()
{
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
}
