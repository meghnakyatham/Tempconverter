#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main (){
    float c, fh;
    printf("Enter temperature in centigrade :");
    scanf("%f", &c);

    fh = (c * 9/5) + 32;

    printf("Temperature in Fahrenheit is : %f\n", fh);

    return 0;
}