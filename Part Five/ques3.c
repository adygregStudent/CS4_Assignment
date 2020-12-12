/*
    Write a Program in C to search any element in the array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

int main (void) {

    int arr[10] = {11, 12, 13, 14, 15, 16, 17, 18, 19, 20}, num, flag = 0;

    printf("Enter the Element to search :: ");
    scanf("%d", &num);

    int i;

    for (i=0; i<sizeof arr; i++)
        if(arr[i] == num) {

            printf("%d Number Found", num);
            flag = 1;

        }
    
    if(flag == 0)
        printf("%d Number not Found", num);

    return 0;

}