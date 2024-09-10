#include <stdio.h>
#include <stdlib.h>

int main()
{
    int N;
    int I = 0;
    printf("entre le chifre que vous vouler l'inverse: ");
    scanf("%d",&N);
   do{

    I = (I * 10) + (N % 10);
    N = N / 10;
   }while(N != 0);
   printf("le chifre inverse est: %d",I);
    return 0;
}
