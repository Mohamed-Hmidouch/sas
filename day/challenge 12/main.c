#include <stdio.h>

int main() {
    int n, i;


    printf("Entrez le nombre d'éléments du tableau : ");
    scanf("%d", &n);


    int tab[n];
    int S = 0;

    printf("Entrez les éléments du tableau :\n");
    for (i = 0; i < n; i++) {
        printf("Element %d : ", i+1);
        scanf("%d", &tab[i]);
    }


    printf("Les éléments du tableau sont :\n");
    for (i = 0; i < n; i++) {
        printf("%d \n ", tab[i]);


    }
     for(i = 0; i < n ; i++){
        S = S + tab[i];
     }
   printf("la somme total des elements est : %d",S);

    return 0;
}
