/*
    Square Pattern 1
        1 1 1 1 1
        0 0 0 0 0
        1 1 1 1 1
        0 0 0 0 0
        1 1 1 1 1

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

void numPattern (int n) {

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=n; j++) {

            if(i%2==0)
                printf("0 ");
            
            else
                printf("1 ");

        }

        printf("\n");

    }

}

int main (void) {

    numPattern (5);

    return 0;

}