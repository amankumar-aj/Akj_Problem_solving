/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/30/2024 TIME - 2:29 PM
*/
#include<stdio.h>
int main() {
    int A[10],s,temp;
    printf("Enter size of array: ");
    scanf("%d",&s);
    if (s<=10) {
        //inseting array elements
        printf("Enter elemets: ");
        for (int i=0;i<s;i++) {
            scanf("%d",&A[i]);
        }
    }
    else {
        printf("overfloww you can not exceed array size above %d",10);
    }
    // printing array
    printf("\ninitial/Original array ");
    for(int i=0;i<s;i++) {
        printf("%d ",A[i]);
    }
    //selection sort
    for (int i = 0; i < s - 1; i++) {
        int minIndex = i;
        for (int j = i + 1; j < s; j++) {
            if (A[j] < A[minIndex]) {
                minIndex = j;
            }
        }
        // Swap A[i] with A[minIndex]
        if (minIndex!=i) {
            temp = A[i];
            A[i] = A[minIndex];
            A[minIndex] = temp;
        }
    }
    //sorted array
    printf("\n\nSORTED ARRAY is : ");
    for(int i=0;i<s;i++) {
        printf("%d ",A[i]);
    }
    return 0;
}
/*
Enter size of array:5
Enter elemets:7 9 8 2 1
initial/Original array 7 9 8 2 1
SORTED ARRAY is : 1 2 7 8 9
 */