/*
 Created by AMAN KUMAR JHA,  ROLL_NO: 2300320130031, on 10/21/2024 TIME - 2:08 PM
*/
// Program 5A) Array implementation of linear queue using array
#include<stdio.h>
#define MAX 5 // Maximum size
int enqueue(int Queue[], int rear, int max_size, int item)
{
    if (rear >= max_size)
    {
        printf("Queue Overflow\n");
        return rear; // rear if  queue is full
    }
    else
    {
        Queue[rear] = item;
        return rear + 1; // new rear
    }
}

int dequeue(int Queue[], int front, int rear)
{
    if (front == rear)
    {
        printf("Queue Underflow\n");
        return front; // front if queue is empty
    }
    else
    {
        printf("Dequeued item: %d\n", Queue[front]);
        return front + 1; // new front
    }
}

int main()
{
    int Queue[MAX], front = 0, rear = 0, max_size = MAX, choice, item;

    while (1)
    {
        printf("\nMenu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            if (rear >= max_size)
            {
                printf("Queue Overflow\n");
            }
            else
            {
                printf("Enter an item to enqueue into the queue: ");
                scanf("%d", &item);
                rear = enqueue(Queue, rear, max_size, item);
            }
            break;
        case 2:
            front = dequeue(Queue, front, rear);
            break;
        case 3:
            return 0;
        default:
            printf("Invalid choice\n");
        }

        // Print queue items after each operation
        printf("Queue items: ");
        for (int i = front; i < rear; i++)
        {
            printf("%d ", Queue[i]);
        }
        printf("\n");
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
Enter your choice: 1
Enter an item to enqueue into the queue: 25
Queue items: 89 25

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 1
Enter an item to enqueue into the queue: 39
Queue items: 89 25 39

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 2
Dequeued item: 89
Queue items: 25 39

Menu:
1. Enqueue
2. Dequeue
3. Exit
Enter your choice: 2
Dequeued item: 25
Queue items: 39
*/
