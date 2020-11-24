/*
    Write a C program to find frequency of each digit in a given integer.

    source by com.adygreg
    [25:11:2020]

*/

#include <stdio.h>

const int base = 10;

void freq (int n);

int main (void) {

    int num;
    printf("Enter :: ");
    scanf("%d", &num);
    
    freq (num);

    return 0;

}

void freq (int n) {

    int f[base], remain;

    for(int i=0; i<base; i++)
        f[i] = 0;
    
    while (n!=0) {

        remain = n%10;
        f[remain]++;
        n /= 10;

    }

    printf("\n-- Frequency --\n");
    for(int i=0; i<base; i++)
        printf("    %d >> %d\n", i, f[i]);

}