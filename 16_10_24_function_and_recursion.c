/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 10/16/2024 TIME - 2:33 PM
*/
#include <stdio.h>

int isPalindrome(int num) {

    int rev= 0;

    while (num > 0) {
        int digit = num % 10;
        rev = rev * 10 + digit;
        num /= 10;
    }

    return rev;
}

int main() {
    printf("----------------------------------------------PROBLEM 1 Palindrome-------------------------------");
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
     int temp=isPalindrome(number);

    if (number==temp) {
        printf("%d is a palindrome.\n", number);
    } else {
        printf("%d is not a palindrome.\n", number);
    }
printf("----------------------------------------------PROBLEM 2 Mean Median-------------------------------");
    //Write a program to find mean and median of five numbers
    printf("Enter five numbers");

    
    return 0;
}
