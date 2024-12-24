//
// Created by AMAN KUMAR JHA on 11/12/2024 TIME - 12:26 PM
//

#include<stdio.h>
float largest_rectangle() {
    float r,area;
    printf("Enter radius of Circle:");
    scanf("%f",&r);
    //formula for largest possible rectangle is 2r^2 with side root2 r
    area=2*r*r;
    return area;

}
int main() {
    float Area;
    Area=largest_rectangle();
    printf("Area of largest possible rectangle: is %0.2f",Area);
    return 0;

}