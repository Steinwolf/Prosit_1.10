#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#include "Francois.h"

int carre()
{
    double nombre=0;
    printf("\nEntrez un nombre :");
    scanf("%lf",&nombre);
    nombre = nombre*nombre;
    printf("%lf", nombre);
    return 0;
}

int division (){
    double nDa,nDb;

    printf("Nombre A\n");
    scanf("%lf",&nDa);                                  //Demande du nombre A
    printf("Nombre B\n");
    scanf("%lf",&nDb);                                  //Demande du nombre B

    printf("%lf / %lf = %lf\n", nDa, nDb, nDa/nDb);     //Afficher le résultat
    return 0;
}

int pythagore (){
    double cote1, cote2, cote3, hypotenuse, adjacent, oppose, hyp2, cotes2;
    // définition des variable nessessaire à la fonction

    printf("entrez la longueur des trois cotés : ");
    scanf("%lf",&cote1);
    scanf("%lf",&cote2);
    scanf("%lf",&cote3);                    //entrée des longueurs des cotes
    if (cote1>cote2 && cote1>cote3){
        cote1=hypotenuse;
        cote2=adjacent;
        cote3=oppose;
    }
    else if (cote2>cote1 && cote2>cote3){
        cote2=hypotenuse;
        cote1=adjacent;
        cote3=oppose;
    }
    else if (cote3>cote2 && cote3>cote1){
        cote3=hypotenuse;
        cote2=adjacent;
        cote1=oppose;                         //ces if servent a determiner le coté le plus grand
    }                                         //pour simplifier l'écriture des calculs
    hyp2=pow(hypotenuse, 2);
    cotes2=pow(adjacent, 2)+pow(oppose, 2);    // application du théorème
    if (hyp2 == cotes2){
        printf("le triangle est rectangle");
    }
    else if (hyp2!=cotes2){
        printf("le triangle n'est pas rectangle");
    }
    return 0;
}
