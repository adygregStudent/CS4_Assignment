/*
    Write a C program to check whether a number is palindrome or not using recursion.

    source by com.adygreg
    [01:12:2020]

*/

#include <stdio.h>

int palidrome (int n) {

    static int remain=0;

    if(n==0)
        return remain;

    remain = remain*10 + (n%10);

    if(n!=0)
        return palidrome (n/10);

}

int main() {

    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if(n==palidrome(n))
        printf("Palidrome");
    else
        printf("Not Palidrome");

    return 0;
}