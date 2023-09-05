#include <stdio.h>
#include <math.h>

float M,A,Me;

float main(){

    printf("digite seu numero = ");
    scanf("%f", &A);
    
    if(A>0)
    {
    M=A*1;
    Me=A*-1;
        printf("maior = %f, menor = %f", M,Me);
    }
    else
    {
        M=A*-1;
        Me=A*1;
        printf("maior = %f, menor = %f", M,Me);
    }    
}
