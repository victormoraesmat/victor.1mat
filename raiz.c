#include <stdio.h>
#include <math.h>

float A,B;

float main(){
    
    printf("digite o indice = ");
    scanf("%f", &B);
    
    printf("digite o radicando = ");
    scanf("%f", &A);
    
    printf("o resultado é = %f", pow(A,1/B));
}