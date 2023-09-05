#include <stdio.h>

float V,D,T;

float main(){
    
    printf("digite D= ");
    scanf("%f", &D);
    
    printf("digite T= ");
    scanf("%f", &T);
    
   V= (D*1000)/T*(100);
    
    printf("o resultado é = %f", V);
}