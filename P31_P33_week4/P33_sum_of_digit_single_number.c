//
// Created by AMAN KUMAR JHA on 11/13/2024 TIME - 7:48 PM
//

#include <stdio.h>

int sumOfDigitsToSingleDigit(int n) {
    int sum = n;

    while (sum >= 10) {
        n = sum;
        sum = 0;
        while (n > 0) {
            sum += n % 10;
            n /= 10;
        }
    }

    return sum;
}

int main() {
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);

    int result = sumOfDigitsToSingleDigit(number);
    printf("The single digit sum is: %d\n", result);

    return 0;
}
