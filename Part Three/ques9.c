/*
    Write a C program to input any character and check whether it is alphabet, digit or special character.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    char c;

    printf("Enter :: ");
    scanf("%c", &c);

    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z'))
        printf("Alphabet");
    else if(c >= '0' && c <= '9')
        printf("Digit");
    else
        printf("Special Character");

    return 0;

}