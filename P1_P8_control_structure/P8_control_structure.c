/*
Created by AMAN KUMAR JHA on 09/17/2024 TIME - 12:35 AM
*/
// PROGRAM -8 Write a C program to accept a coordinate point in a XY coordinate system and determine in which quadrant the coordinate point lies.

#include<stdio.h>
void coordinate(int x,int y) {
    if (x > 0 && y > 0) {
        printf("The point (%d, %d) lies in the First Quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0) {
        printf("The point (%d, %d) lies in the Second Quadrant.\n", x, y);
    }
    else if (x < 0 && y < 0) {
        printf("The point (%d, %d) lies in the Third Quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0) {
        printf("The point (%d, %d) lies in the Fourth Quadrant.\n", x, y);
    }
    else if(x == 0 && y != 0) {
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    }
    else if (x != 0 && y == 0) {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    }
    else {
        printf("The point (%d, %d) is at the origin.\n", x, y);
    }
}

int main() {
    int a,b;
    printf("Enter your coordinates[x,y]:");
    scanf("%d%d",&a,&b);
    coordinate(a,b);

    return 0;
}