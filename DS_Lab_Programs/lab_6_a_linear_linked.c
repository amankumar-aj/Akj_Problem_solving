//
// Created by AMAN KUMAR JHA on 2/12/2024 TIME - 2:12 PM
//
 // Program 6A) linear linked list primitive operations
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(struct Node** head, int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = *head;
    *head = newNode;
}
void delete(struct Node** head, int x) {
    struct Node* temp = *head, *prev = NULL;
    if (temp != NULL && temp->data == x) {
        *head = temp->next;
        free(temp);
        return;
    }
    while (temp != NULL && temp->data != x) {
        prev = temp;
        temp = temp->next;
    }
    if (temp == NULL) return;
    prev->next = temp->next;
    free(temp);
}
void display(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    insert(&head, 10);
    insert(&head,20);
    insert(&head, 30);
    display(head);
    delete(&head, 20);
    display(head);
    return 0;
}

//OUTPUT-------------------------
/*
30 -> 20 -> 10 -> NULL
30 -> 10 -> NULL

 */