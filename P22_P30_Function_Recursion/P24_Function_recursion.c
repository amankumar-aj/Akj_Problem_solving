/*
 Created by AMAN KUMAR JHA on 10/26/2024 TIME - 3:00 PM
*/
//PROGRAM -24 Factorial of a number using tail recursion

#include<stdio.h>
int fact(int n) {
    if(n==0|| n==1) {
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}
int main() {
    int num;
    printf("Enter number: ");
    scanf("%d",&num);

    printf("Factorial of %d is = %d",num,fact(num));
 return 0;
}