#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    int operation,S,M,D,R,SS;
    int Pn,Dn;
    char reponse;
    printf("-----------menu-------------\n");
    printf("1- la somme \n");
    printf("2- la mulitiplication \n");
    printf("3- la division \n");
    printf("4- le reste de division \n");
    printf("5- la sustraction \n");
    printf("entre voitre choix : ");
    scanf("%d",&operation);
    do{
    switch(operation){

        case  1 :  printf("entre le premier num");
                 scanf("%d",&Pn);
                 printf("entre le deuxieme num");
                 scanf("%d",&Dn);
                 printf("la somme est: %d \n",Pn+Dn);
        break;
        case 2 : printf("entre le premier num");
                 scanf("%d",&Pn);
                 printf("entre le deuxieme num");
                 scanf("%d",&Dn);
                 printf("la multiplication est: %d \n",Pn*Dn);
        break;
        case 3 : printf("entre le premier num");
                 scanf("%d",&Pn);
                 printf("entre le deuxieme num");
                 scanf("%d",&Dn);
                 printf("la division est: %d \n",Pn /Dn);
        break;
                case 4 : printf("entre le premier num");
                 scanf("%d",&Pn);
                 printf("entre le deuxieme num");
                 scanf("%d",&Dn);
                 printf("le reste de division  est: %d \n",Pn % Dn);
        break;
                case 5 : printf("entre le premier num");
                 scanf("%d",&Pn);
                 printf("entre le deuxieme num");
                 scanf("%d",&Dn);
                 printf("la somme est: %d \n",pow(Pn,Dn));
        break;
                default : printf("l'operateur est faux \n");
        break;
    }
    printf("do you want do add other operation (y/n) : \n");
    scanf(" %c",&reponse);
    }while(reponse != 'n');
    return 0;
}
