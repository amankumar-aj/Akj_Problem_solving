/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/9/2024 TIME - 2:40 PM
*/
//Program 1 A) Write a program to implement Binary Search
#include<stdio.h>
int main() {
    int A[10],s,temp;
    printf("Enter size : ");
    scanf("%d",&s);
        //inseting array elements
        printf("Enter elemets: ");
        for (int i=0;i<s;i++) {

            scanf("%d",&A[i]);
        }
// bubble sort
    for (int i=0;i<s-1;i++) {
        for (int j=0;j<s-1;j++) {
            if (A[j]>A[j+1]) {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
    }
    //binary search
    int l=0,r=s-1,data,found=0;
    printf("\nEnter number to search in array : ");
    scanf("%d",&data);
    while (l<=r) {
        int mid=(l+r)/2;
        if (data==A[mid]) {
            printf("\nITEM %d is found at %d index in array ",data,mid);
            found=1;
            break;
        }
        else if (data<A[mid]) {
            r=mid-1;//search in left
        }
        else
            l=mid+1;//search in right
    }
    if (found==0) {
        printf("\nITEM %d not found in array",data);
    }
    return 0;
}

/*
----------OUTPUT--------------------
Enter size:5
 Enter elemets:65
8 3 6 4
Enter number to search in array:4
ITEM 4 is found
Process finished with exit code 0
------------------------------------
Enter size:5
 Enter elemets:63
8 2 7 38
Enter number to search in array:5
ITEM 5 not found in array
Process finished with exit code 0
 */