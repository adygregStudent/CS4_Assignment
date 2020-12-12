/*
    Write a Program in C to find largest and smallest element in the array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

int main (void)  {

    int i, arr[10];

    printf("Enter any 10 Numbers\n");
    for(i=0; i<10; i++) {

        printf(">> ");
        scanf("%d", &arr[i]);

    }

    int max=arr[5], min=arr[5];

    for(i=0; i<10; i++) {

        if(max<arr[i])
            max = arr[i];
        
        if(min>arr[i])
            min = arr[i];

    }


    
    printf("Max :: %d\n", max);
    printf("Min :: %d\n", min);

    return 0;

}