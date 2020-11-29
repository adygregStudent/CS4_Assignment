/*
    Write a C program to check whether a number is negative, positive or zero.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    if (num>0)
        printf("Positive");
    else if (num<0)
        printf("Negative");
    else
        printf("Zero");

    return 0;
}