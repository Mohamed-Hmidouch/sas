#include <stdio.h>
#include <stdlib.h>

int main()
{
    int Nbr =0;
    long N;

    printf("entre N : ");
    scanf("%ld",&N);
    do{

        N = N /10;
        Nbr++;

    }while(N  != 0);
    printf("les nombre de ce n sont : %ld",Nbr);
    return 0;
}
