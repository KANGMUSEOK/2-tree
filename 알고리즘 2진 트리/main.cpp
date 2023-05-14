#include "tree.h"
#include<stdio.h>

int tree_main() {
    Node* root = makeTree();
    printNode(root);

    int valueToFind = 400;
    Node* foundNode = findNode(root, valueToFind);
    if (foundNode != NULL)
        printf("값이 있는 노드를 찾았습니다. %d\n", foundNode->value);
    else
        printf("값이 %d인 노드를 찾을 수 없습니다.\n", valueToFind);

    Node* newNode = createNode(600);
    Node* insertedNode = insertLeftNode(foundNode, newNode);
    if (insertedNode != NULL)
        printf("%d 값이 노드 왼쪽에 삽입된 새 노드 %d\n", newNode->value, insertedNode->value);

    return 0;
}
