/*
    Write a C program to find sum of digits of a given number using recursion

    source by com.adygreg
    [01:12:2020]

*/

#include <stdio.h>

int digSum (int n) {
    
    if(n!=0)
        return (n%10)+digSum(n/10);

    return 0;

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf("%d", &num);

    printf("Sum :: %d", digSum(num));

    return 0;

}