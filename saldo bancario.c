#include <stdio.h>
#include <math.h>

float sat,san,dep,sq;

float main(){

    printf("digite salario anterior = ");
    scanf("%f", &san);
    
    printf("digite deposito = ");
    scanf("%f", &dep);
    
    printf("digite saque = ");
    scanf("%f", &sq);

    sat = san+dep-sq;

    printf("seu salario atual é = %f", sat);
}
