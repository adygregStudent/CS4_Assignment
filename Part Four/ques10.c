/*
    Write a C program to find power of any number using recursion.

    source by com.adygreg
    [30:11:2020]

*/

#include <stdio.h>

double power (double n, double p) {

    if(p!=0)
        return n*power(n, --p);
    
    return 1;

}

int main (void) {

    float a, b;

    printf("Enter [Number] :: ");
    scanf("%f", &a);
    printf("Enter [Power]  :: ");
    scanf("%f", &b);

    printf("Result :: %.2lf", power((double)a, (double)b));

    return 0;

}