/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 2:57 PM
*/
// PROGRAM -22 Program to find if the given no is a palindrome

#include<stdio.h>

int Palindrome(int num) {

    int rev= 0;

    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    return rev;
}
int main() {

    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    int temp=Palindrome(number);

    if (number==temp) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }

 return 0;
}
