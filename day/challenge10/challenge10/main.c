#include <stdio.h>
#include <stdlib.h>

int main()
{
    int A;
    printf("entre num : ");
    scanf("%d",&A);
    for(int i = 10;i>0;i--){

       int M = A*i;
       printf("%d * %d =%d \n",A,i,M);
    }
    return 0;
}
