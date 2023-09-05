#include <stdio.h>

float V, //valor da hora aula
T, //quantidade de hora trabalhadas
P, //% de desconto
S, //salario bruto
D, //valor de desconto
L; //salario liquido

int main(){
    
    printf("digite o valor da hora aula: ");
    scanf("%f", &V);
    
    printf("digite a quantidade de horas trabalhadas: ");
    scanf("%f", &T);
    
    printf("digite a porcentagem do desconto: ");
    scanf("%f", &P);
    
    S = V*T;
    D = S*(P/100);
    L = S-D;
    
    printf("o seu salário minimo é = %f", L);
}