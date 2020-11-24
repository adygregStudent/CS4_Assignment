/*
    Write a C program to print all alphabets from a to z.

    source by com.adygreg
    [24:11:2020]

*/

#include <stdio.h>

int main (void) {

    for(int i=0; i<26; i++)
        printf("%c ", 'a'+i);

    return 0;

}