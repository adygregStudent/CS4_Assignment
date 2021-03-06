/*
    Write a C program to check whether a number is Perfect number or not.

    source by com.adygreg
    [25:11:2020]

*/

#include <stdio.h>

int perfectChecker (int n) {

    int flag = 0, sum = 0;

    for(int i=1; i<n; i++)
        if (n%i == 0) 
            sum += i;

    if(n == sum)
        flag = 1;

    return flag;

}

int main (void) {

    int num;

    printf("Enter :: ");
    scanf ("%d", &num);

    if(perfectChecker(num))
        printf("Perfect Number");
    else
        printf("Not a Perfect Number");

    return 0;

}