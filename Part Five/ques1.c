/*
    Write a Program in C to insert element at a given location in array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

#define MAX 100

int main (void) {

    int arr[MAX], n, i=0;

    for(i=0; i<MAX; i++)
        arr[i] = 0;

    printf("Enter a Location of Array [1, 100] :: ");
    scanf("%d", &n);

    printf("arr[%d] :: ", n);
    scanf("%d", &arr[n-1]);

    for(i=0; i<MAX; i++) {

        printf("%d ", arr[i]);

        if((i+1)%10 == 0)
            printf("\n");
    
    }

    return 0;

}