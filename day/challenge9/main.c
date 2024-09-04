#include <stdio.h>
#include <stdlib.h>
 void min(int A,int B);
int main()
{
    int A,B;
   printf("entre A : ");
   scanf("%d",&A);
   printf("entre B : ");
   scanf("%d",&B);
   min(A,B);
    return 0;
}
 void min(int A,int B){
     if(B>A){
        printf("the min num is %d",A);
     }else{
     printf("the min num is %d",B);
     }
 }

