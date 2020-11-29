/*
    Write a C program to check whether a number is even or odd.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    if(num%2 == 0)
        printf("Even");
    else
        printf("Odd");

    return 0;

}