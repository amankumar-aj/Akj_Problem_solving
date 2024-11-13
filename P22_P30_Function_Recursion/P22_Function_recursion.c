/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 2:57 PM
*/
// PROGRAM -23 Write a program to find mean and median of five numbers using function

//here take s=5
#include <stdio.h>

// Function to calculate the mean
float mean(int a[], int s) {
    float sum = 0,mean=0;
    for (int i = 0; i < s; i++) {
        sum += a[i];

    }
    mean=sum/s;
    return mean;
}

// Function to sort an array using bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

// Function to calculate the median
float median(int a[], int s) {
    bubbleSort(a, s); // Sort the array
    float median=0;

    if (s % 2 == 0) {
        // If even, average of two middle elements
        median= (a[s / 2 - 1] + a[s / 2]) / 2.0;
        return median;
    } else {
        // If odd, middle element
        median=a[s / 2];
        return median;
    }
}

int main() {
    int n, nums[10];

    printf("Enter total numbers: ");
    scanf("%d", &n);

    printf("\nEnter numbers: ");
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    // Mean function call
    printf("\nMean of given %d numbers is %.3f", n, mean(nums, n));

    // Median function call
    printf("\nMedian of given %d numbers is %0.2f", n, median(nums, n));

    return 0;
}

