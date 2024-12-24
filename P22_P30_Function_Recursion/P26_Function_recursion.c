/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 3:04 PM
*/
// PROGRAM-26 Display Prime Numbers Between Intervals Using Function
#include<stdio.h>

void prime_number(int x,int y) {

     for (int i=x;i<=y;i++) {
        int count=0;
        for (int j=x;j<i;j++) {
            if (i%j==0) {
                count++;
            }
        }if (count==0)
            printf("%d ",i);
    }

}


int main() {
    int a,b;
    printf("Enter start number:");
    scanf("%d",&a);

    printf("Enter end number:");
    scanf("%d",&b);

    printf("Prime number between %d and %d is: \n",a,b);
    prime_number(a,b);



 return 0;
}