#include <stdio.h>

int main() {
float T;
printf("entre la tem en Celsius :");
scanf("%f",&T);
if (T < 0){
    printf("solide");
}else if( T < 100){
        printf("liquide");
} else {
  printf("Gaz");
}

    return 0;
}