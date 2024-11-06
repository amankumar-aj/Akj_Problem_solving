/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/9/2024 TIME - 2:17 PM
*/
// Program 1 B) write a program to implement Linear search
#include<stdio.h>
int main() {

    int A[10],s,flag=0,num;
    printf("Enter size of array: ");
    scanf("%d",&s);
    //inseting array elements
    printf("Enter elemets: ");
        for (int i=0;i<s;i++) {
            scanf("%d",&A[i]);
        }
    //searching item in araay
    printf("\nEnter number to search in array: ");
    scanf("%d",&num);
    for (int i=0;i<s;i++) {
        if (A[i]==num) {
            printf("\nItem %d is found in array at %d index",num,i);
            flag=1;
            break;
        }
    }
    //for item not found
    if (flag==0) {
        printf("\n%d is not found in array",num);
    }
    return 0;
}
/*
---------------OUTPUT---------------------
Enter size of array:5
 Enter elemets:56 78 96 33 17
Enter number to search in array:17
Item 17 is found in array at 4 index
Process finished with exit code 0
------------------------------------------
Enter size of array:5
 Enter elemets:23 89 75 4 1
Enter number to search in array:25
25 is not found in array
Process finished with exit code 0

 */