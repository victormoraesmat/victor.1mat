#include <stdio.h>
#include <math.h>

float A,B,C,D;

float main(){
    
    printf("digite o valor 1: ");
    scanf("%f", &A);
    
    printf("digite o valor 2: ");
    scanf("%f", &B);
    
    printf("digite o valor 3: ");
    scanf("%f", &C);
    
    D = pow(A+B+C,2);

    printf("o valor é = %f", D);
}