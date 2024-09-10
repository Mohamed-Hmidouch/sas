#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,M,i,T[] = {1,2,3,4,5,6,7,8,9,10};
    printf("x*y |");
    for( i = 0;i<10;i++){
        printf(" %d",T[i]);
    }
    for(i=0;i<10;i++){
    printf(" \n %d",T[i]);
    for(j=1;j<10;j++){
    M = i*j;
    printf(" %d",M);
    }

    }
    return 0;
}
