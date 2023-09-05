#include <stdio.h>
#include <math.h>

float X,R;

float main(){

    printf("digite x = ");
    scanf("%f", &X);

    R = pow(X,2)-2*X+1;

    printf("seu y é = %f", R);
}
