/*
Created by AMAN KUMAR JHA on 09/17/2024 TIME - 11:59 AM
*/
//PROGRAM -6 Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.

#include<stdio.h>
int main() {

    printf("\nTRIANGLES");
    int x,y,z;
    printf("\nEnter sides of Triangle[x,y,z]: ");
    scanf("%d%d%d",&x,&y,&z);

    if (x==y && y==z)
        printf("\nTrangle with sides %d, %d and %d is EQUILATERAL trianmgel",z,y,z);
    else if(x==y || y==z ||z==x)
        printf("\nTrangle with sides %d, %d and %d is ISOSCALES trianmgel",z,y,z);
    else
        printf("\nTrangle with sides %d, %d and %d is SCALEN trianmgel",z,y,z);

    return 0;
}