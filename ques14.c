/*
    Write a C program to calculate sum of digits of a number.

    source by com.adygreg
    [25:11:2020]

*/

#include <stdio.h>

int main (void) {

    int n, sum=0;

    printf("Enter :: ");
    scanf("%d", &n);

    while (n!=0) {

        sum += n%10;
        n /= 10;

    }

    printf("Sum :: %d", sum);

    return 0;

}