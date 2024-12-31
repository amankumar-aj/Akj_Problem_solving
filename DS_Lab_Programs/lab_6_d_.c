//
// Created by AMAN KUMAR JHA on 12/8/2024 TIME - 7:54 PM
//
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};
void insert(struct Node** head, int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    newNode->next = *head;
    newNode->prev = NULL;
    if (*head != NULL) (*head)->prev = newNode;
    *head = newNode;
}
void deleteNode(struct Node** head, int x) {
    struct Node* temp = *head;
    while (temp != NULL && temp->data != x) temp = temp->next;
    if (temp == NULL) return;
    if (temp->prev) temp->prev->next = temp->next;
    if (temp->next) temp->next->prev = temp->prev;
    if (temp == *head) *head = temp->next;
    free(temp);
}
void traverse(struct Node* head) {
    while (head != NULL) {
        printf("%d <-> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}
int main() {
    struct Node* head = NULL;
    insert(&head, 10);
    insert(&head,20);insert(&head, 30);traverse(head);
    deleteNode(&head, 20);
    traverse(head);
    return 0;
}
/*
 OUTPUT---------------------
30 <-> 20 <-> 10 <-> NULL
30 <-> 10 <-> NULL
 */