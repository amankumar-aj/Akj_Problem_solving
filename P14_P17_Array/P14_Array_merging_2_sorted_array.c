/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 9:50 AM
*/
#include <stdio.h>

void merge_array(int A[], int B[], int C[], int n, int m) {
    int i = 0, j = 0, k = 0;
    while (i < n && j < m) {
        if (A[i] <= B[j]) {
            C[k] = A[i];
            i++;
            k++;
        } else {
            C[k] = B[j];
            j++;
            k++;
        }

    }
    while (i < n) {
        C[k] = A[i];
        k++;
        i++;
    }
    while (j < m) {
        C[k] = B[j];
        k++;
        j++;
    }
}

int main() {
    int a[10], b[10], C[20], m, n;

    printf("Enter size of Array A: ");
    scanf("%d", &n);

    printf("Enter size of Array B: ");
    scanf("%d", &m);
    int size = n + m;

    // Input Array A
    printf("Enter elements of A: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }
    // Input Array B
    printf("Enter elements of B: ");
    for (int i = 0; i < m; i++) {
        scanf("%d", &b[i]);
    }
    // Merge Arrays funcion call
    merge_array(a, b, C, n, m);
    // Output Merged Array
    printf("Merged Array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
