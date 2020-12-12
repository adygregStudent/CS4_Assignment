/*
    Write a Program in C to find even and odd numbers in an array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

int main (void) {

    int i, arr[10];

    printf("Enter any 10 Numbers\n");
    for(i=0; i<10; i++) {

        printf(">> ");
        scanf("%d", &arr[i]);

    }

    for(i=0; i<10; i++) {

        if(arr[i]%2==0)
            printf("%d - Even\n", arr[i]);
        else
            printf("%d - Odd\n", arr[i]);

    }

    return 0;

}