/*
    Write a Program in C to delete any element from the array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

int main (void) {

    int arr[10] = {10, 11, 22, 43, 44, 85, 76, -7, 78, 59};

    int i, n;

    for(i=0; i<10; i++)
        printf("%d ", arr[i]);
    
    printf("\nEnter the Element to Delete :: ");
    scanf("%d", &n);

    for(i=0; i<10; i++)
        if(arr[i]!=n)
            printf("%d ", arr[i]);

    return 0;

}