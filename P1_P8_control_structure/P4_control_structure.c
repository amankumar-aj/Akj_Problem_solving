/*
Created by AMAN KUMAR JHA on 09/17/2024 TIME - 11:35 AM
*/
// PROGRAMM -4 check whether the year entered by the user is a leap year or not.

#include<stdio.h>
int main() {
    printf("Checking Leap year");
    int year;
    printf("\nEnter year to be checked:\n");
    scanf("%d",&year);
    if(year%400==0)
        printf("%d id leap year",year);
    else if(year%100==0)
        printf("%d is not leap year",year);
    else if (year%4==0)
        printf("%d is a leap year",year);
    else
        printf("%d is not a leap year",year);

    return 0;

}