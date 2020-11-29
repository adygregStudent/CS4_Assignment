/*
    Write a C program to input any alphabet and check whether it is vowel or consonant.

    source by com.adygreg
    [29:11:2020]

*/

#include <stdio.h>

int main (void) {

    char c;

    printf("Enter :: ");
    scanf("%c", &c);

    int lower, upper;

    if((c >= 'a' && c <= 'z')||(c >= 'A' && c <= 'Z')) {
        
        printf("Alphabet - ");
        
        lower = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u');
        upper = (c=='A' || c=='E' || c=='I' || c=='O' || c=='U');

        if (lower||upper)
            printf("Vowel");
        else 
            printf("Consonant");

    }

    else
        printf("Not an Alphabet");

    return 0;

}