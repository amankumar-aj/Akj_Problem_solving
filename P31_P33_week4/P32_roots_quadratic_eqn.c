//
// Created by AMAN KUMAR JHA on 11/13/2024 TIME - 7:47 PM
//
/* Find roots of a given quadratic equation */
#include <stdio.h>
#include <math.h>

void Quadratic_roots(double p, double q, double r) {
    double r1, r2;
    double D = q * q - 4 * p * r;

    if (D >= 0) {
        r1 = (-q + sqrt(D)) / (2 * p);
        r2 = (-q - sqrt(D)) / (2 * p);
        printf("\nRoots are real:\nr1 = %.2f\nr2 = %.2f\n", r1, r2);
    } else {
        printf("Roots are imaginary");
    }
}

int main() {
    double a, b, c;

    printf("Enter values of a, b, c for ax^2 + bx + c: ");
    printf("\nEnter value of a: ");
    scanf("%lf", &a);
    printf("\nEnter value of b: ");
    scanf("%lf", &b);
    printf("\nEnter value of c: ");
    scanf("%lf", &c);

    Quadratic_roots(a, b, c);

    return 0;
}
