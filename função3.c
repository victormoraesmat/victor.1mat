#include <stdio.h>
#include <math.h>

float X,R;

float main(){

    printf("digite x = ");
    scanf("%f", &X);

    R =((2*pow(X,3))/3)-(5*pow(X,2));

    printf("seu y é = %f", R);
}
