/*
    Write a C program to check whether a character is alphabet or not.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    char alpha;

    printf("Enter :: ");
    scanf("%c", &alpha);

    if((alpha >= 'a' && alpha <= 'z')||(alpha >= 'A' && alpha <= 'Z'))
        printf("Alphabet");
    else
        printf("Not an Alphabet");

    return 0;

}