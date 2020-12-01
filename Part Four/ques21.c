/*
    Write a C program to find LCM of two numbers using recursion.

    source by com.adygreg
    [01:12:2020]

*/

#include <stdio.h>

int gcd (int a, int b) {

    if(b!=0)
        return gcd (b, a%b);
    
    return a;

}

int main (void) {

    int numO, numT;

    printf("Enter [First] :: ");
    scanf("%d", &numO);

    printf("Enter [Second] :: ");
    scanf("%d", &numT);

    int lcm = (numT*numO)/gcd((numO>numT) ? numO:numT, (numO>numT) ? numT:numO);
    printf("LCM :: %d", lcm);

    return 0;

}