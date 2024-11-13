/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/23/2024 TIME - 5:30 PM
*/
// 2.) WAP to insert element in existing array
//INSERTION
#include<stdio.h>
int main() {
    int A[10],s,num, pos;
    printf("Enter size of array: ");
    scanf("%d",&s);
    // inserting elements of an array
    printf("\nEnter elements of an array:");
    for(int i=0;i<s;i++) {
        scanf("%d",&A[i]);
    }
    // printing array
    printf("\ninitial/Original array ");
    for(int i=0;i<s;i++) {
        printf("%d ",A[i]);
    }//boundary checking
    if (s>=10) {
        printf("\nOverflow Condition You cnnot inser more elements!!!");
    }
    else {
        printf("\nEnter number to insert: ");
        scanf("%d",&num);
        printf("\nEnter position(pos=ind+1) to insert:");
        scanf("%d",&pos);
        if (pos<=0||pos>s+1) {
            printf("INVALID POSITION");
        }else {
            //shifting elements to make space for new one
            for (int i=s;i>=pos;i--) {
                A[i]=A[i-1];
            }
            A[(pos-1)]=num;
            s++;
            //printing new array
            printf("\nUPDATED ARRAY IS: ");
            for (int i=0;i<s;i++) {
                printf("%d ",A[i]);
            }
        }
    }
}

/* ==========================OUTPUT=====================================================
Enter size of array:5
Enter elements of an array:1 2 3 4 5
initial/Original array 1 2 3 4 5
Enter number to insert:15
Enter position(pos=ind+1) to insert:3
UPDATED ARRAY IS: 1 2 15 3 4 5

Process finished with exit code 0
*/
