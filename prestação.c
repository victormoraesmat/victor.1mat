#include <stdio.h>

float V,Tx,T,P;

float main(){
    printf("gigite: valor =");
    scanf("%f", &V);
    
    printf("digite: taxa =");
    scanf("%f", &Tx);
    
    printf("digite: tempo =");
    scanf("%f", &T);
    
   P = V+(V*(Tx/100))+T;
    
    printf("prestação =""%f", P);
}
