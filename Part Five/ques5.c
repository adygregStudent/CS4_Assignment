/*
    Write a Program in C to count occurrences of any number in an array.

    source by com.adygreg
    [08:12:2020]
*/

#include <stdio.h>

int main (void) {

    int arr [10], count [10];

    int i, j, k, temp, remain;

    for(i=0; i<10; i++)
            count[i] = 0;

    printf("Enter any 10 Numbers\n");
    for(i=0; i<10; i++) {

        printf(">> ");
        scanf("%d", &arr[i]);

    }

    for(i=0; i<10; i++) {

        if(arr[i]>=10) {

            temp = arr[i];

            while(temp!=0) {

                remain = temp%10;
                for(k=0; k<10; k++)
                    if(remain==k)
                        count[k]++;
                temp /= 10;

            }
        }

        else {

            for(j=0; j<10; j++) {

                if(arr[i]==j)
                    count[j]++;

            }

        }

    }

    printf("|----------|\n");
    for(i=0; i<10; i++)
        printf("|  %d -> %d  |\n", i, count[i]);
    printf("|----------|");

    return 0;

}