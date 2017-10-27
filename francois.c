#include<stdio.h>
#include<stdlib.h>
#include "francois.h"
#include <math.h>

void second_degre () {
    float a,b,c;
    printf("entrez le facteur a de l'equation : \n");
    scanf("%f", &a);
    printf("entrez le facteur b de l'equation : \n");
    scanf("%f", &b);
    printf("entrez le facteur c de l'equation : \n");
    scanf("%f", &c);
    float delta = pow(b,2) - 4*a*c;
    if (delta>0){
        printf("les solutions x1 et x2 sont : \n%f\n%f\n", (0-b-sqrt(delta))/(2*a), (0-b+sqrt(delta))/(2*a));
    }
    else if (delta==0){
        printf("la solution est : \n%d\n", (0-b)/(2*a));
    }
    else
    {
        printf("pas de solution");
    }

}

