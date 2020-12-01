/*
    Write a C program to print all natural numbers between 1 to n using recursion.

    source by com.adygreg
    [01:12:2020]

*/

#include <stdio.h>

void naturalNumber (int n) {

    static int i = 1;

    printf("%d ", i);
    i+=1;

    if(n!=1)
        return naturalNumber(n-1);
    
}

int main (void) {
    
    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    naturalNumber(num);

    return 0;

}