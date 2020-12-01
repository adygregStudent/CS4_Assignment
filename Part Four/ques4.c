/*
    Write a C program to check whether a number is even or odd using functions.

    source by com.adygreg
    [30:11:2020]

*/

#include <stdio.h>

void oddeven (int n) {

    if(n%2==0)
        printf("Even");
    else
        printf("Odd");
        
}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    oddeven(num);

    return 0;

}