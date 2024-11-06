/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 10/9/2024 TIME - 2:33 PM
*/

#include<stdio.h>

int main() {
    int A[10], s, temp;
    printf("Enter size of array: ");
    scanf("%d", &s);

    if (s <= 10) {
        // Inserting array elements
        printf("Enter elements: ");
        for (int i = 0; i < s; i++) {
            scanf("%d", &A[i]);
        }
    } else {
        printf("Overflow! You cannot exceed array size above %d.\n", 10);
        return 1; // Exit if the size is more than 10
    }

    // Printing initial/Original array
    printf("\nInitial/Original array: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", A[i]);
    }

    // Insertion sort
    for (int i = 1; i < s; i++) {
        temp = A[i];
        int j = i - 1;
        while (j >= 0 && A[j] > temp) {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = temp;
    }

    // Printing sorted array
    printf("\n\nSorted array is: ");
    for (int i = 0; i < s; i++) {
        printf("%d ", A[i]);
    }

    return 0;
}
/*
Enter size of array:5
 Enter elements:23 56 98 33 21

Initial/Original array: 23 56 98 33 21

Sorted array is: 21 23 33 56 98
*/

