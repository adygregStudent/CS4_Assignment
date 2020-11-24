/*
    Write a C program to print all natural numbers in reverse (from n to 1).

    source by com.adygreg
    [24:11:2020]

*/

#include <stdio.h>

int main (void) {

    int n;
    printf("Enter :: ");
    scanf("%d", &n);

    for (int i=n; i>=0; i--)
        printf("%d ", i);

    return 0;
}