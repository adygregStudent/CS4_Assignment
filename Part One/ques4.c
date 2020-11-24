/*
    Write a C program to print all even numbers between 1 to 100

    source by com.adygreg
    [24:11:2020]

*/

#include <stdio.h>

int main (void) {

    for (int i=2; i<=100; i+=2)
        printf("%d ", i);

    return 0;
}