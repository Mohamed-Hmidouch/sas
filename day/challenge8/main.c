#include <stdio.h>
#include <stdlib.h>
 void max(int A,int B);
int main()
{
    int A,B;
   printf("entre A : ");
   scanf("%d",&A);
   printf("entre B : ");
   scanf("%d",&B);
   max(A,B);
    return 0;
}
 void max(int A,int B){
     if(A>B){
        printf("the max num is %d",A);
     }else{
     printf("the max num is %d",B);
     }
 }

