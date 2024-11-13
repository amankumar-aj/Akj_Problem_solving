/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 3:02 PM
*/
 // PROGRAM-25 Write a program to print all perfect numbers in given range using the function.
#include <stdio.h>

int isPerfect(int num) {
    int sum = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            sum += i;
        }
    }
    return sum == num;
}

int main() {
    int start, end;


    printf("Enter the first number: ");
    scanf("%d", &start);

    printf("Enter the last number: ");
    scanf("%d", &end);

    printf("Perfect numbers between %d and %d are:\n", start, end);
    for (int i = start; i <= end; i++) {
        if (isPerfect(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
