#include <stdio.h>

int main() {

int D,N;
printf("entre N :");
scanf("%d",&N);
int ipremier = 1;
for(int i=2 ; N/2;i++){
    if(N%2 == 0){
        ipremier = 0;
    }break;
}
if(ipremier == 1){
    printf("N est premier ");

}else{
   printf("n est pas premier");
}



        return 0;
    }



