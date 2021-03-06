/*
    Write a C program to input month number and print number of days in that month.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int monthNum;
    int days [12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    input:
        printf("Enter [Month Number] :: ");
        scanf("%d", &monthNum);

    if (monthNum<1 || monthNum>12)
        goto input;

    printf("Total Days :: %d", days[monthNum-1]);

    return 0;

}