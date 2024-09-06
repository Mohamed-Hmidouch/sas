#include <stdio.h>

int main() {

    int tab[10]= {1,2,3,2,5,6,7,8,9,10} ;
    int cunt,i,j,fr[10];

    for(i=0;i< 10;i++){
     fr[i] = -1;
        }
    for(i=0;i<tab;i++){
            cunt =1;
        for(j=i+1;j<tab;j++){
       if(tab[i]== tab[j]){
        cunt++;
        fr[j]=0;
       };
    if(fr[i]!=0){
        fr[i]=cunt;
    }
        }

    }
    for(i=0;i<tab[10];i++){
        if(fr[i] == 1){
        printf("%d",tab[i]);
    }
    }


        return 0;
    }



