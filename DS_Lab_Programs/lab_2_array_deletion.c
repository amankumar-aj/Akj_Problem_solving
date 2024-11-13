/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/29/2024 TIME - 5:40 PM
*/
//DELETION
#include<stdio.h>
int main() {
    int A[10],s,pos;
    printf("Enter size of an array: ");
    scanf("%d",&s);
    printf("\nEnter elemts: ");
   for (int i=0;i<s;i++) {

            scanf("%d",&A[i]);
   }
    printf("\nOriginal/initial array is: ");
    for (int i=0;i<s;i++) {
        printf("%d ",A[i]);
    }
    //deletion in array
    printf("\nEnter position of elemts to be deleted: ");
    scanf("%d",&pos);
    if(pos<=0||pos>s) {
        printf("\nINVALID POSITION cant't delete !");
    }
    else {
        for (int i=(pos-1);i<(s-1);i++) {
            A[i]=A[i+1];

        }s--;
        printf("\nUPDATED ARRAY IS: ");
        for (int i=0;i<s;i++) {
            printf("%d ",A[i]);
        }
        printf("size of updated array is %d",s);
    }
    return 0;
}
/*======================OUTPUT==========================
Enter size of an array:5
Enter elemts:8 9 2 7 6
Original/initial array is: 8 9 2 7 6
Enter position of elemts to be deleted:3

UPDATED ARRAY IS: 8 9 7 6
size of updated array is 4
 */