#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct informations
{
    int quantite;
    float prix;
    char titre[15],auteur[15];
    char title_rechercher[30];
    char changer_s[15],suprimer_b[15];
    int nevau_stock;
};
int main()
{
    struct informations book[100];
    int options,i,nbr_livr;
    char title_rechercher[30];
    char changer_s[30],suprimer_b[15];
    int nevau_stock,total_livr = 0;
    do
    {
        printf("--------------------------------\n");
        printf("-1 ajouter un livre.\n");
        printf("2-Afficher tous les livres disponibles.\n");
        printf("3-Rechercher un livre par son titre.\n");
        printf("4-Mettre a jour la quantiter d'un livre.\n");
        printf("5-Supprimer un livre du stock.\n");
        printf("6-Afficher le nombre total de livres en stock.\n");
        printf("7-sortier de programme.\n");
        printf("--------------------------------\n");
        printf("entrer votre choix : ");
        scanf("%d",&options);
        /////////////////////////////////////////////////////////
        switch(options)
        {
        case 1 :
            printf("combien de livre vous voulez ajouter :");
            scanf("%d",&nbr_livr);
            for(i=0; i<nbr_livr; i++)
            {
                printf("--------------------------------\n");
                printf("ajouter les informations du livre [%d] :\n",i+1);
                printf("ajouter le titre du livre :");
                scanf(" %[^\n]s",&book[i].titre);
                printf("ajouter l'auteur du livre : ");
                scanf(" %[^\n]s",&book[i].auteur);
                printf("ajouter le prix du livre : ");

                scanf("%f",&book[i].prix);
                printf("ajouter la quantite du livre :");
                scanf("%d",&book[i].quantite);
            };
            printf("--------------------------------\n");
            break;
        case 2 :
            for(i=0; i<nbr_livr; i++)
            {
                printf("livre [%d] est : \n",i+1);
                printf("le titre de livre : %s \n",book[i].titre);
                printf("l'auteur  : %s \n",book[i].auteur);
                printf("le prix  : %.2f \n",book[i].prix);
                printf("la quntite : %d \n",book[i].quantite);

            };
            break;
        case 3 :
            printf("entrer le titre de livre rechercher :");
            scanf(" %[^\n]",title_rechercher);
            for(i=0; i<nbr_livr; i++)
            {
                if(strcmp(book[i].titre,title_rechercher)==0)
                {
                  printf("le prix est  : %.2f \n ",book[i].prix);
                  printf("le nom de livre est : %s \n",book[i].titre);
                  printf("la quntite de livre set : %d \n",book[i].quantite);
                  printf("lauteur de livre est : %s \n",book[i].auteur);
                }
           };
           break;//for case 3
          case 4 : printf("entrer le titre de livre que vous voulez changer le stocks :");
                   scanf(" %[^\n]",changer_s);
                   printf("le livre est trouver %s \n",changer_s);
                   for(i=0; i<nbr_livr; i++){
                   if(strcmp(book[i].titre,changer_s)==0){
                    printf("entre la nouvaux stock :");
                    scanf("%d", &nevau_stock);
                    book[i].quantite = nevau_stock;
                    printf("la nouvelle quntite est %d \n",book[i].quantite);
                }
                   } break;
            case 5 :printf("entrer le titre de livre que vous voulez suprimer  :");
                    scanf(" %[^\n]",suprimer_b);
                    printf("le livre que vous voulez suprimer est %s \n",suprimer_b);
                    for(i=0; i<nbr_livr; i++){
                    if(strcmp(book[i].titre,suprimer_b)==0){
                        int j;
                       for(j=i;j<nbr_livr-1;j++){
                        book[j]=book[ j + 1];
                       }
                    nbr_livr--;
                    printf("le livre a ete suprimer.\n");
                    }else{
                        printf("le livre n'est pas trouver");
                    }
                    }
                    break;
            case 6 :
                for(i=0;i<nbr_livr;i++){
                total_livr = total_livr + book[i].quantite;
            }
            printf("le nombre total des livre est :%d \n",total_livr);
        }//switch
    }
    while(options != 7);





    return 0;
}
