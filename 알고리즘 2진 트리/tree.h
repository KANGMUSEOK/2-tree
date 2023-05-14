#define TREE_H

typedef struct _Node {
    int value;
    struct _Node* left;
    struct _Node* right;
} Node;

Node* createNode(int value);
Node* makeTree();
void printNode(Node* root);
Node* findNode(Node* root, int value);
Node* insertLeftNode(Node* where, Node* new_node);
Node* insertRightNode(Node* where, Node* new_node);


