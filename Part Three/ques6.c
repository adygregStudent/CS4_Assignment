/*
    Write a C program to check whether a year is leap year or not.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int year;

    printf("Enter Year :: ");
    scanf("%d", &year);

    if(year%4 == 0)
        printf("Leap Year");
    else
        printf("Not a Leap Year");

    return 0;

}