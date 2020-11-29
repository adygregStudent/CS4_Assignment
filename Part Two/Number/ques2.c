/*
    Square Pattern 2
        0 1 0 1 0
        0 1 0 1 0
        0 1 0 1 0
        0 1 0 1 0
        0 1 0 1 0

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

void numPattern (int n) {

    for (int i=1; i<=n; i++) {

        for (int j=1; j<=n; j++) {

            if(j%2==0)
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