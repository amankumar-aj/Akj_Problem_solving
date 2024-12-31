//
// Created by AMAN KUMAR JHA on 12/8/2024 TIME - 7:54 PM
//

#include <stdio.h>
#include <stdlib.h>
struct Node {
    int data;
    struct Node* next;
};
void insert(struct Node** head, int x) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = x;
    if (*head == NULL) {
        *head = newNode;newNode->next = newNode;return;}
    struct Node* temp = *head;
    while (temp->next != *head) temp = temp->next;
    temp->next = newNode;newNode->next = *head;}
void deleteNode(struct Node** head, int x) {
    if (*head == NULL) return;
    struct Node *curr = *head, *prev = NULL;
    while (curr->data != x) {
        if (curr->next == *head) return;prev = curr;curr = curr->next;}
    if (curr == *head) {
        if (curr->next == *head) {
            *head = NULL;
            free(curr);
            return;}
        struct Node* temp = *head;
        while (temp->next != *head) temp = temp->next;
        *head = curr->next;
        temp->next = *head;
        free(curr);
    } else {
        prev->next = curr->next;free(curr);}}
void traverse(struct Node* head) {
    if (head == NULL) return;
    struct Node* temp = head;
    do {printf("%d -> ", temp->data);temp = temp->next;
    } while (temp != head);printf("(back to head)\n");}
int main() {
    struct Node* head = NULL;
    insert(&head, 10);
    insert(&head, 20);insert(&head, 30);
    traverse(head);
    deleteNode(&head, 20);
    traverse(head);return 0;
}
/*
 OUTPUT-------------------
10 -> 20 -> 30 -> (back to head)
10 -> 30 -> (back to head)

 */