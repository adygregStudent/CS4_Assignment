/*
    Write a Program in C to sort elements of the array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

int main (void) {

    int arr[10] = {4, 5, 1, 3, 2, 6, 9, 7, 8, 0};

    int i, j, temp;

    printf("\nUnsorted  >> ");
    for(i=0; i<10; i++)
        printf("%d ", arr[i]);

    for(i=0; i<10; i++)
        for(j=i; j<10; j++)
            if(arr[i]>arr[j]) {

                temp = arr[i];
                arr [i] = arr [j];
                arr[j] = temp; 

            }

    printf("\nSorted    >> ");
    for(i=0; i<10; i++)
        printf("%d ", arr[i]);


    return 0;

}