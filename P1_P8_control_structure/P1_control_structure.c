/*
 Created by AMAN KUMAR JHA on 09/17/2024 TIME - 11:35 AM
*/

/* PROGRAM-1
Write a program to calculate the total salary of a person. The user has to enter the basic salary (an integer) and the grade (an uppercase character),and depending upon which the total salary is calculated as -totalSalary = basic + hra + da + allow – pf. where : hra = 20% of basic, da = 50% of basic, allow = 1700 if grade = ‘A’, allow = 1500 if grade = ‘B’, allow = 1300 if grade = ‘C' or any other character, pf = 11% of basic. Round off the total salary and then print the integral part only.*/
#include<stdio.h>
int sal(int basic, char grd) {
    int total,hra ,da,pf,allow;
    hra=0.2*basic;
    da=0.5*basic;
    pf=0.11*basic;
    if(grd=='A'){
        allow=1700;
    }
    else if(grd=='B') {
        allow=1500;
    }
    else {
        allow=1300;
    }
    total=basic+hra+da+allow-pf;
    return total;
}
int main() {
    int b_sal;
    char grade;
    printf("Enter Salary[basic]: ");
    scanf("%d",&b_sal);
    printf("\nEnter your Grade: ");
    scanf("%c",&grade);
    scanf("%c",&grade);printf("\nYour Salary is %d",sal(b_sal,grade));

return 0;

}
