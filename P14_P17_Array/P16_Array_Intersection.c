/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 9:52 AM
*/

#include<stdio.h>

void intersection_array(int A[], int B[], int C[], int n, int m, int* k) {
    int i = 0, j = 0;
    *k = 0;
    while (i < n && j < m) {
        if (A[i] < B[j]) {
            i++;
        } else if (A[i] == B[j]) {
            C[*k] = A[i];
            i++;
            j++;
            (*k)++;
        } else {
            j++;
        }
    }
}

int main() {
    int a[100], b[100], C[100], m, n, k;

    printf("Enter size of Array A: ");
    scanf("%d", &n);

    printf("Enter size of Array B: ");
    scanf("%d", &m);

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

    // Intersection Arrays function call
    intersection_array(a, b, C, n, m, &k);

    // Output intersection of Array
    printf("Intersection of Array: \n");
    for (int i = 0; i < k; i++) {
        printf("%d ", C[i]);
    }

    return 0;
}
