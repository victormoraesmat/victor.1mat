#include <stdio.h>
#include <math.h>

float A,B,C,D,E;

float main(){
    
    printf("digite o 1 numero = ");
    scanf("%f", &A);
    
    printf("digite o 2 numero = ");
    scanf("%f", &B);
    
    printf("digite o 3 numero = ");
    scanf("%f", &C);
    
    printf("digite o 4 numero = ");
    scanf("%f", &D);
    
    E=D;
    D=C;
    C=B;
    B=A;
    A=E;
    
    printf("os resultados são: N1= %f, N2= %f, N3 %f, N4 %f", A,B,C,D);
}