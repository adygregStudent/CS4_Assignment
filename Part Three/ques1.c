/*
    Write a C program to find maximum between two numbers.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int a, b;

    printf("Enter two Values [Separate by Comma] :: ");
    scanf("%d, %d", &a, &b);

    int max = (b>a) ? b:a;

    printf("Max Value :: %d", max);

    return 0;

}