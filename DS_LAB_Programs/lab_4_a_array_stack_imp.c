/*
Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 10/7/2024 TIME - 2:41 PM
*/

#include <stdio.h>

#define MAX 5 //  maximum size

int PUSH(int Stack[], int top, int max_size, int item) {
    if (top >= max_size) {
        printf("Stack Overflow\n");
        return top; // top if the stack is full
    } else {
        Stack[top] = item;
        return top + 1; // new top position
    }
}

int POP(int Stack[], int top) {
    if (top <= 0) {
        printf("Stack Underflow\n");
        return top; //  top if the stack is empty
    } else {
        printf("Popped item: %d\n", Stack[top - 1]);
        return top - 1; // new top position
    }
}

int main() {
    int Stack[MAX], top = 0, max_size = MAX, choice, item;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                if (top >= max_size) {
                    printf("Stack Overflow\n");
                } else {
                    printf("Enter an item to push onto the stack: ");
                    scanf("%d", &item);
                    top = PUSH(Stack, top, max_size, item);
                }
            break;
            case 2:
                top = POP(Stack, top);
            break;
            case 3:
				return 0;
            default:
                printf("Invalid choice\n");
        }

        // Print stack items after each operation
        printf("Stack items:");
        for (int i = 0; i < top; i++) {
            printf("%d ", Stack[i]);
        }
        printf("\n");
    }

    return 0;
}

/*
Menu:
1. Push
2. Pop
3. Exit
Enter your choice:1
 Enter an item to push onto the stack:58
 Stack items:58

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:1
 Enter an item to push onto the stack:45
 Stack items:58 45

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:1
 Enter an item to push onto the stack:83
 Stack items:58 45 83

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:1
 Enter an item to push onto the stack:59
 Stack items:58 45 83 59

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:2
 Popped item: 59
Stack items:58 45 83

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:2
 Popped item: 83
Stack items:58 45

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:3
 ExitingInvalid choice
Stack items:58 45

Menu:
1. Push
2. Pop
3. Exit
Enter your choice:3
 Exiting*/
