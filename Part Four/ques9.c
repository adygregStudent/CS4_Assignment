/*
    Write a C program to print all perfect numbers between given interval using functions.

    source by com.adygreg
    [30:11:2020]

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

    int a, b;

    printf("Enter [1st] :: ");
    scanf("%d", &a);
    printf("Enter [2nd] :: ");
    scanf("%d", &b);

    printf("--Perfect Number--\n");

    for(int i=a; i<=b; i++)
        if(perfectChecker(i))
            printf(">> %d\n", i);

    return 0;

}