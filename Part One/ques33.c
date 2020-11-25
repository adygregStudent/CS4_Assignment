/*
    Write a C program to print all Perfect numbers between 1 to n.

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

    printf("--Perfect Number--\n");
    for(int i=1; i<=num; i++)
        if(perfectChecker(i))
            printf(">> %d\n", i);

    return 0;

}