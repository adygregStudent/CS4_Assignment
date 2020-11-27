/*
    Write a C program to swap first and last digits of a number.

    source by com.adygreg
    [24:11:2020]

*/

#include <stdio.h>

int power (int n, int p) {

    if(p!=0)
        return n*power(n, --p);
    return 1;

}

int first_digit (int n) {

    int fd;

    while (n!=0) {

        fd = n;
        n /= 10;

    }

    return fd;
}

int last_digit (int n) {

    return n%10;
    
}

int count (int n) {

    int c=0;

    while (n!=0) {
        n /= 10;
        c++;
    }

    return c;

}

int converter (int n) {

    int f = first_digit(n), l = last_digit(n), digits = count(n)-1;
    
    //printf("%d %d %d\n", f, l, digits);

    n = n - l + f;
    n = n - f*power(10, digits) + l*power(10, digits);

    return n;
}

int main (void) {

    int n;
    printf("Enter :: ");
    scanf("%d", &n);

    printf("Swapped :: %d", converter(n));

    return 0;
}
