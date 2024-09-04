#include <stdio.h>
#include <stdlib.h>
void somme(int A,int B);
 void somme(int A, int B){
 int S = A+B;
 printf("la somme de A Et B est :%d ",S);
 return;
 }
int main()
{
    int A , B;
    printf("entre A");
    scanf("%d",&A);
    printf("entre B");
    scanf("%d",&B);
    somme(A,B);
    return 0;
}
