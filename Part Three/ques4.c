/*
    Write a C program to check whether a number is divisible by 5 and 11 or not.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    if(num%5==0)
        printf("Divisible by 5\n");
    if(num%11==0)
        printf("Divisible by 11\n");
    if(num%5!=0 && num%11!=0)
        printf("Not Divisible by 5 and 11");

    return 0;

}