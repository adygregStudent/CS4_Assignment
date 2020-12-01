/*
    Write a C program to find cube of any number using function.

    source by com.adygreg
    [30:11:2020]

*/

#include <stdio.h>

float cubeNum (float n) {

    return n*n*n;

}

int main (void) {

    float num;

    printf("Enter :: ");
    scanf("%f", &num);

    printf("%.2f", cubeNum(num));

    return 0;

}