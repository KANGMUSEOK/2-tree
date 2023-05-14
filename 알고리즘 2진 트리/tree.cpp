#include "tree.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int value) {
    Node* node = (Node*)malloc(sizeof(Node));
    node->value = value;
    node->left = NULL;
    node->right = NULL;
    return node;
}

Node* makeTree() {
    Node* root = createNode(100);
    root->left = createNode(200);
    root->right = createNode(300);
    root->right->left = createNode(400);
    root->right->right = createNode(500);
    return root;
}

void printNode(Node* root) {
    if (root == NULL)
        return;

    // Preorder traversal
    printf("%d ", root->value);
    printNode(root->left);
    printNode(root->right);

    /*
    // Inorder traversal
    printNode(root->left);
    printf("%d ", root->value);
    printNode(root->right);

    // Postorder traversal
    printNode(root->left);
    printNode(root->right);
    printf("%d ", root->value);
    */
}

Node* findNode(Node* root, int value) {
    if (root == NULL)
        return NULL;

    if (root->value == value)
        return root;

    Node* foundNode = findNode(root->left, value);
    if (foundNode != NULL)
        return foundNode;

    foundNode = findNode(root->right, value);
    return foundNode;
}

Node* insertLeftNode(Node* where, Node* new_node) {
    if (where == NULL)
        return NULL;

    Node* oldLeft = where->left;
    where->left = new_node;
    new_node->left = oldLeft;
    return where;
}

Node* insertRightNode(Node* where, Node* new_node) {
    if (where == NULL)
        return NULL;

    Node* oldRight = where->right;
    where->right = new_node;
    new_node->right = oldRight;
    return where;
}
