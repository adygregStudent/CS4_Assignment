/*
    Write a C program to find LCM of two numbers.

    source by com.adygreg
    [25:11:2020]

*/

#include <stdio.h>

int lcm_finder (int n, int m) {

    int lcm, max;

    for (max = (m>n) ? m:n; 1; max++) {
        
        if(max%m == 0 && max%n == 0) {
            lcm = max;
            break;
        }

    }
    return lcm;

}

int main (void) {

    int a, b;

    printf("Enter Two Numbers :: ");
    scanf("%d %d", &a, &b);

    printf("LCM :: %d", lcm_finder(a, b));

    return 0;

}
