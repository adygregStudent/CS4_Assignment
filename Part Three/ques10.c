/*
    Write a C program to check whether a character is uppercase or lowercase alphabet.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    char c;

    printf("Enter :: ");
    scanf("%c", &c);

    if(c >= 'A' && c <= 'Z')
        printf("Alphabet - UpperCase");
    else if(c >= 'a' && c <= 'z')
        printf("Alphabet - LowerCase");
    else
        printf("Not an Alphabet");

    return 0;

}