#include <stdio.h>

float A,B,C;

int main(){
    
    printf("digite o primeiro número: ");
    scanf("%f", &A);
    
    printf("digite o segundo número: ");
    scanf("%f", &B);
    
    C= A + B;
    
    printf("a soma dos seus números é = %f", C);
}