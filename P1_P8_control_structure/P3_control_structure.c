/*
Created by AMAN KUMAR JHA on 09/17/2024 TIME - 11:35 AM
*/
// PROGRAM -3 check whether an alphabet entered by the user is a vowel or a consonant.

#include<stdio.h>
int main() {
    char ch;
    printf("\nEnter character: ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e'|| ch=='i'||ch=='o' || ch=='u'|| ch=='A' || ch=='E'|| ch=='I'||ch=='O' || ch=='U' ) {
        printf("\nVowel");

    }
    else {
        printf("\nConsonant");

    }

    return 0;
}