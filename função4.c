#include <stdio.h>
#include <math.h>

float X,R;

float main(){

    printf("digite x = ");
    scanf("%f", &X);

    R = ((2*pow(X,5))-5*pow(X,5));

    printf("seu y é = %f", R);
}
