/*
    Write a C program to input all sides of a triangle and check whether triangle is valid or not.

    source by com.adygreg
    [30:11:2020]

*/

#include <stdio.h>

int verifyTriangle (int a, int b, int c);

int main (void) {

    int a, b, c;

    printf("Enter all Sides lengths [Separate by Comma] :: ");
    scanf("%d, %d, %d", &a, &b, &c);

    if (verifyTriangle(a, b, c))
        printf("Triangle");
    
    else
        printf("Not a Triangle");

    return 0;
}

int verifyTriangle (int a, int b, int c) {

    int flag = 0;

    if (a+b>c)
        if (a+c>b)
            if (b+c>a)
                flag = 1;

    return flag;

}