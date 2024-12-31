//
// Created by AMAN KUMAR JHA on 12/8/2024 TIME - 7:53 PM
//
#include <stdio.h>
#include <stdlib.h>
struct Node {
    int coeff, exp;
    struct Node* next;
};
struct Node* createNode(int coeff, int exp) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->coeff = coeff;
    newNode->exp = exp;
    newNode->next = NULL;
    return newNode;
}
void appendNode(struct Node** head, int coeff, int exp) {
    struct Node* newNode = createNode(coeff, exp);
    if (*head == NULL) {
        *head = newNode;
        return;
    }
    struct Node* temp = *head;
    while (temp->next != NULL) temp = temp->next;
    temp->next = newNode;
}
struct Node* addPolynomials(struct Node* p1, struct Node* p2) {
    struct Node* result = NULL;
    while (p1 && p2) {
        if (p1->exp == p2->exp) {
            appendNode(&result, p1->coeff + p2->coeff, p1->exp);
            p1 = p1->next;
            p2 = p2->next;
        } else if (p1->exp > p2->exp) {
            appendNode(&result, p1->coeff, p1->exp);
            p1 = p1->next;
        } else {
            appendNode(&result, p2->coeff, p2->exp);
            p2 = p2->next;
        }
    }
    while (p1) {
        appendNode(&result, p1->coeff, p1->exp);
        p1 = p1->next;
    }
    while (p2) {
        appendNode(&result, p2->coeff, p2->exp);
        p2 = p2->next;
    }
    return result;
}
void display(struct Node* head) {
    while (head != NULL) {
        printf("%dx^%d", head->coeff, head->exp);
        if (head->next != NULL) printf(" + ");
        head = head->next;
    }
    printf("\n");
}
int main() {
    struct Node *poly1 = NULL, *poly2 = NULL, *result = NULL;
    appendNode(&poly1, 3,2);
    appendNode(&poly1, 5, 1);
    appendNode(&poly2, 4, 2);
    appendNode(&poly2, 2, 1);
    appendNode(&poly2, 1, 0);
    printf("Polynomial 1: ");
    display(poly1);
    printf("Polynomial 2: ");
    display(poly2);result = addPolynomials(poly1, poly2);
    printf("Sum: ");display(result);
    return 0;
}
/*
 OUTPUT-----------------------------
Polynomial 1: 3x^2 + 5x^1
Polynomial 2: 4x^2 + 2x^1 + 1x^0
Sum: 7x^2 + 7x^1 + 1x^0
 */