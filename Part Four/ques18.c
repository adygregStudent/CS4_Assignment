/*
    Write a C program to find factorial of any number using recursion.

    source by com.adygreg
    [01:12:2020]

*/

#include <stdio.h>

int factorial (int n) {
    
    if(n!=0)
        return n*factorial(n-1);

    return 1;

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Factorial :: %d", factorial(num));

    return 0;

}