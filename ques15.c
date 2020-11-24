/*
    Write a C program to calculate product of digits of a number.

    source by com.adygreg
    [25:11:2020]

*/

#include <stdio.h>

int main (void) {

    int n, pro=1;

    printf("Enter :: ");
    scanf("%d", &n);

    while (n!=0) {

        pro *= n%10;
        n /= 10;

    }

    printf("Product :: %d", pro);

    return 0;

}