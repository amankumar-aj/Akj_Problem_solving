//
// Created by AMAN KUMAR JHA on 11/4/2024 TIME - 2:37 PM
//Program 5B) Array implimentation of circular Queue
#include <stdio.h>
#define MAX 5
int enqueue(int Queue[], int *rear, int *front, int max_size, int item) {
    if ((*rear + 1) % max_size == *front) {
        printf("Queue Overflow\n");
        return *rear;
    } else {
        *rear = (*rear + 1) % max_size;
        Queue[*rear] = item;
        if (*front == -1) {
            *front = 0;
        }
    }
    return *rear;
}

int dequeue(int Queue[], int *rear, int *front, int max_size) {
    if (*front == -1) {
        printf("Queue Underflow\n");
        return *front;
    } else {
        printf("Dequeued item: %d\n", Queue[*front]);
        if (*front == *rear) {
            *front = *rear = -1;  // Queue is now empty
        } else {
            *front = (*front + 1) % max_size;
        }
    }
    return *front;
}

void printQueue(int Queue[], int front, int rear, int max_size) {
    if (front == -1) {
        printf("Queue is empty\n");
        return;
    }

    printf("Queue items: ");
    int i = front;
    while (1) {
        printf("%d ", Queue[i]);
        if (i == rear)break;
        i = (i + 1) % max_size;
    }
    printf("\n");
}

int main() {
    int Queue[MAX], front = -1, rear = -1, max_size = MAX, choice, item;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter an item to enqueue into the queue: ");
            scanf("%d", &item);
            rear = enqueue(Queue, &rear, &front, max_size, item);
            break;
            case 2:
                front = dequeue(Queue, &rear, &front, max_size);
            break;
            case 3:
                return 0;
            default:
                printf("Invalid choice\n");
        }

        printQueue(Queue, front, rear, max_size);
    }

    return 0;
}
/*
Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 1
Enter an item to enqueue into the queue: 89
Queue items: 89

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 2
Dequeued item: 89
Queue is empty

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 1
Enter an item to enqueue into the queue: 56
Queue items: 56

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 1
Enter an item to enqueue into the queue: 89
Queue items: 56 89

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 1
Enter an item to enqueue into the queue: 47
Queue items: 56 89 47

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 2
Dequeued item: 56
Queue items: 89 47

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 2
Dequeued item: 89
Queue items: 47

*/
