//
// Created by AMAN KUMAR JHA on 12/9/2024 TIME - 2:09 PM
//
//PROGRAM [7A] Binary tree traversal
#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node *left;
    struct node *right;
};


struct node* create() {
    int x;
    struct node *p = (struct node*)malloc(sizeof(struct node));
    if (p == NULL) {
        printf("allocation failed.\n");
        return NULL;
    }
    printf("Enter data (-1 for no node): ");
    scanf("%d", &x);
    if (x == -1) {
        free(p);
        return NULL;
    }
    p->data = x;
    printf("Enter left child of %d:\n", x);
    p->left = create();
    printf("Enter right child of %d:\n", x);
    p->right = create();
    return p;
}


void inorder(struct node *root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}


void preorder(struct node *root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}


void postorder(struct node *root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

int main() {
    struct node *root = NULL;
    printf("Create the binary tree:\n");
    root = create();

    printf("\nIn-order traversal: ");
    inorder(root);

    printf("\nPre-order traversal: ");
    preorder(root);

    printf("\nPost-order traversal: ");
    postorder(root);

    return 0;
}
