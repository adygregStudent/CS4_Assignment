/*
    Write a C program to print multiplication table of any number.

    source by com.adygreg
    [24:11:2020]

*/

#include <stdio.h>

int main (void) {

    int n;
    printf("Enter :: ");
    scanf("%d", &n);

    for (int i=1; i<=10 ; i++)
        printf("%d x %d = %d\n", n, i, n*i);

    return 0;
}