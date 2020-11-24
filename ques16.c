/*
    Write a C program to enter a number and print its reverse.

    source by com.adygreg
    [25:11:2020]

*/

#include <stdio.h>

int reverse (int n);

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Reversed :: %d", reverse(num));

    return 0;

}

int reverse (int n) {

    int result=0, remain;

    while (n!=0) {

        remain = n%10;
        result = result*10 + remain;
        n /= 10;

    }

    return result;

}