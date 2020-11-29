/*
    Write a C program to find maximum between three numbers.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    int a, b, c;

    printf("Enter three Values [Separate by Comma] :: ");
    scanf("%d, %d, %d", &a, &b, &c);

    int temp1 = (b>a) ? b:a;
    int temp2 = (b>c) ? b:c;
    int max = (temp1>temp2) ? temp1:temp2;

    printf("Max Value :: %d", max);

    return 0;

}