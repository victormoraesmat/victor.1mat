#include <stdio.h>

float A,B,C,D,E,F;

float main(){
    
    printf("digite o valor 1: ");
    scanf("%f", &A);
    
    printf("digite o valor 2: ");
    scanf("%f", &B);
    
    printf("digite o valor 3: ");
    scanf("%f", &C);
    
    printf("digite o valor 3: ");
    scanf("%f", &D);
    
    E = A*C;
    F = B+D;

    printf("os valores são = %f %f", E,F);
}