/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/23/2024 TIME - 4:39 PM
*/
// 2.) write a program to implement array insertion deletion and traversal.

//TRAVERSAL
#include<stdio.h>
int main() {
    int A[100],s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    // inserting elements of an array
    printf("Enter elements of an array:");
    for(int i=0;i<s;i++) {
        scanf("%d",&A[i]);
    }
    // printing array
    printf("Array is ");
    for(int i=0;i<s;i++){
        printf("%d ",A[i]);

    }
}
/* ====================OUTPUT==========================================
Enter size of array:5
 Enter elements of an array:4 7 8 3 9
Array is 4 7 8 3 9
*/
