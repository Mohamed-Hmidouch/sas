#include <stdio.h>
#include <stdlib.h>

   typedef struct informations {
    char name_of_book[20],Auteur[20];
    int quantite,prix;

   } informations;

int main()
{
    informations livre_titl,name_auteuur,quant,prix;
    char Table_1[2] = {&livre_titl,&name_auteuur};
    int Table_2[2] = {&quant,&prix};
    printf("entre name of book :");
    scanf("%s",&Table_1[0]);
    printf("entre name of auteur :");
    scanf("%s",&Table_1[1]);
    printf("%s",&Table_1[1]);
    return 0;
}
