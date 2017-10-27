#include <stdio.h>
#include <stdlib.h>
#include "Adrien.h"
#include "Alexandre.h"
#include "Corentin.h"
#include "Francois.h"
#include "PierreLoup.h"


int main()
{
    int choixUtilisateur=0;
    int nombre=0;

    printf("---- MENU ----\n1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Division Euclidienne");
    printf("\n6. Polynome Degre 2\n7. Carree \n8. Puissance\n9. Racine Carree\n10. Racine Nieme");
    printf("\n11. Factorielle\n12. Approximation de Pi\n13. Pythagore\n14. PGCD\n0. QUITTER");
    printf("\nVotre Choix : ");
    scanf("%d", &choixUtilisateur);

       while(choixUtilisateur!=0)
    //Boucle qui tourne tant que l utilisateur ne rentre pas la valeur 0 dans la variable choix
    {
        switch(choixUtilisateur)
        {
            case 1:
            fonctionAddition();
            break;

            case 2:
            fonctionSoustraction();
            break;

            case 3:
            fonctionMultiplication();
            break;

            case 4:
            //division();
            break;

            case 5:
            fonctionDivisionEuclidienne();
            break;

            case 6:
            fonctionPolynomeSecondDegre();
            break;

            case 7:
            //carre();
            break;

            case 8:
            fonctionPuissance();
            break;

            case 9:
            fonctionRacineCarre();
            break;

            case 10:
            fonctionRacineNieme();
            break;

            case 11:
            printf("\nEntrez un nombre");
            scanf("%d",&nombre);
            fonctionFactoriel(nombre);
            break;

            case 12:
            fonctionPi();
            break;

            case 13:
            //pythagore();
            break;

            case 14:
            fonctionPGCD();
            break;

            default:
            printf("Choix invalide, Entrez un autre choix\n");
            break;
        }
        printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
        printf("---- MENU ----\n1. Addition\n2. Soustraction\n3. Multiplication\n4. Division\n5. Division Euclidienne");
        printf("\n6. Polynome Degre 2\n7. Carree \n8. Puissance\n9. Racine Carree\n10. Racine Nieme");
        printf("\n11. Factorielle\n12. Approximation de Pi\n13. Pythagore\n14. PGCD\n0. QUITTER");
        printf("\nVotre Choix : ");
        scanf("%d", &choixUtilisateur);
    }
    return 0;
}
