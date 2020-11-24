/*
    Write a C program to print all natural numbers from 1 to n

    source by com.adygreg
    [24:11:2020]

*/

#include <stdio.h>

int main (void) {

    int n;
    printf("Enter :: ");
    scanf("%d", &n);

    for (int i=0; i<=n; i++)
        printf("%d ", i);

    return 0;
}