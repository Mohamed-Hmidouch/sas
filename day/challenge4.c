#include <stdio.h>

int main() {
float n;
printf("entre numbre :");
scanf("%f",&n);
 float m;
 float i;
for(i==1;i<=10;i++){
   m = i*n;
   printf("la multi de %.2f * %.2f est %.2f \n",n,i,m);
}
 
     return 0;
}