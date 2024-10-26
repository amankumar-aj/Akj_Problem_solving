/*
Created by AMAN KUMAR JHA on 09/17/2024 TIME - 12:13 AM
*/
/*PROGRAM -7
Write a C program to read temperature in centigrade and display a suitable message according to temperature state below : Go to the editor
Temp < 0 then Freezing weather
Temp 0-10 then Very Cold weather
Temp 10-20 then Cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then Its Hot
Temp >=40 then It Very Hot
 */
#include<stdio.h>
int main(){
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