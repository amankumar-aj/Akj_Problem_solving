/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 10/21/2024 TIME - 2:07 PM
*/
// PROGRAM 4B) Evaluation of postfix Expression

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>

int stack[50];
int top = -1;

void push(int x) {
    stack[++top] = x;
}

int pop() {
    if (top == -1) {
        printf("Error: Stack underflow\n");
        exit(1);
    }
    return stack[top--];
}

int main() {
    char exp[20];
    char *e;
    int num1, num2, result, num;

    printf("Enter the postfix expression: ");
    scanf("%s", exp);

    e = exp;

    while (*e != '\0') {
        if (isdigit(*e)) {
            num = *e - '0';
            push(num);
        } else {
            num1 = pop();
            num2 = pop();
            switch (*e) {
                case '+':
                    result = num2 + num1;
                    break;
                case '-':
                    result = num2 - num1;
                    break;
                case '*':
                    result = num2 * num1;
                    break;
                case '/':
                    if (num1 == 0) {
                        printf("Error: Division by zero\n");
                        exit(1);
                    }
                    result = num2 / num1;
                    break;
                default:
                    printf("Error: Unsupported operator '%c'\n", *e);
                    exit(1);
            }
            push(result);
        }
        e++;
    }

    if (top != 0) {
        printf("Error: Invalid postfix expression\n");
        exit(1);
    }

    printf("\nThe result of the expression %s = %d\n\n", exp, pop());

    return 0;
}
