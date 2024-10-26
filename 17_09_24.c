/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 9/17/2024 TIME - 11:35 AM
*/
/*Find the largest number among the three numbers entered by the user.
Check whether an alphabet entered by the user is a vowel or a consonant.
Check whether the year entered by the user is a leap year or not.
Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
"Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then It Very Hot"*/

#include<stdio.h>
int main() {
    //Find the largest number among the three numbers entered by the user.
    int a,b,c;
    printf("Enter first number :");
    scanf("%d",&a);
    printf("\nEnter second  number :");
    scanf("%d",&b);
    printf("\nEnter Third  number :");
    scanf("%d",&c);
    if (a>b && a>c) {
        printf("\n%d is grater",a);
    }
    else if (b>a && b>c) {
        printf("\n%d is grater",b);
    }
    else {
        printf("\n%d is grater",c);
    }

    //Check whether an alphabet entered by the user is a vowel or a consonant.
    char ch;
    printf("\nEnter character: ");
    scanf("%c",&ch);

    if (ch=='a' || ch=='e'|| ch=='i'||ch=='o' || ch=='u'|| ch=='A' || ch=='E'|| ch=='I'||ch=='O' || ch=='U' ) {
        printf("\nVowel");

    }
    else {
        printf("\nConsonant");

    }
    //Check whether the year entered by the user is a leap year or not.
    printf("\nChecking Leap year");
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

    //Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
    printf("\nTRIANGLES");
    int x,y,z;
    printf("\nEnter sides of Triangle: ");
    scanf("%d%d%d",&x,&y,&z);

    if (x==y && y==z)
        printf("\nTrangle with sides %d, %d and %d is EQUILATERAL trianmgel",z,y,z);
    else if(x==y || y==z ||z==x)
        printf("\nTrangle with sides %d, %d and %d is ISOSCALES trianmgel",z,y,z);
    else
        printf("\nTrangle with sides %d, %d and %d is SCALEN trianmgel",z,y,z);

    //write a C program to read temperature in centigrade and display a suitable message according to temperature state below
    int t;
    printf("\nEnter temprature in centigrade[C] :");
    scanf("%d",&t);

    if (t<0) {
        printf("Freezing weather");
    }
    else if (t>=0 && t<10) {
        printf("Very Cold weather");
    }
    else if (t>=10 && t<20) {
        printf("Cold weather");
    }
    else if (t>=20 && t<30) {
        printf("Normal weather");
    }
    else if (t>=20 && t<30) {
        printf("Its Hot");
    }
    else
        printf("Its very Hot");
    return 0;


}