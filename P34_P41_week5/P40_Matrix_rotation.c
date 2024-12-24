//
// Created by AMAN KUMAR JHA on 11/13/2024 TIME - 7:57 PM
//
#include <stdio.h>

// Function to rotate the matrix 90 degrees clockwise
void rotate_Matrix_90(int a[10][10], int r, int c) {
    int result[10][10];
    //rotate logic
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            result[j][r - 1 - i] = a[i][j];//for NxN matrix n-i+1
        }
    }

    // rotated matrix
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++) {
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
}

// void rotate_Matrix_180(int a[10][10], int r, int c) {
//
// }


int main() {
    int a[10][10], r, c;
    printf("Enter the number of rows: ");
    scanf("%d", &r);
    printf("Enter the number of columns: ");
    scanf("%d", &c);

    printf("\nEnter elements: ");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    //  initial matrix
    printf("Input matrix:\n");
    for (int i = 0; i < r; i++) {
        for (int j = 0; j < c; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Rotated matrix[90]:\n");
    rotate_Matrix_90(a, r, c);
    // printf("Rotated matrix[180]:\n");
    // rotate_Matrix_180(a,r,c);

    return 0;
}
