#include <stdio.h>
#include <stdlib.h>
 void multiplication(int A,int B){
  int M = A*B;
  printf("la multiplication de A et B est %d",M);
  return M;
 }
int main()
{
    int A,B;
   printf("entre A : ");
   scanf("%d",&A);
   printf("entre B : ");
   scanf("%d",&B);
   multiplication(A,B);
    return 0;
}

