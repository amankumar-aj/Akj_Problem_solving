/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/30/2024 TIME - 2:18 PM
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
    //shorting array
    for (int i=0;i<s-1;i++) {
        for (int j=0;j<s-1;j++) {
            if (A[j]>A[j+1]) {
                temp=A[j];
                A[j]=A[j+1];
                A[j+1]=temp;
            }
        }
        printf("\n\nSORTED ARRAY is : ");
        for(int i=0;i<s;i++) {
            printf("%d ",A[i]);
        }
        return 0;
    }
}
/*
Enter size of array:5
Enter elemets:89 2 78 10 16
initial/Original array 89 2 78 10 16
SORTED ARRAY is : 2 10 16 78 89
*/