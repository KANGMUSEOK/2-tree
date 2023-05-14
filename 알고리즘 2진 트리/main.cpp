#include "tree.h"
#include<stdio.h>

int tree_main() {
    Node* root = makeTree();
    printNode(root);

    int valueToFind = 400;
    Node* foundNode = findNode(root, valueToFind);
    if (foundNode != NULL)
        printf("���� �ִ� ��带 ã�ҽ��ϴ�. %d\n", foundNode->value);
    else
        printf("���� %d�� ��带 ã�� �� �����ϴ�.\n", valueToFind);

    Node* newNode = createNode(600);
    Node* insertedNode = insertLeftNode(foundNode, newNode);
    if (insertedNode != NULL)
        printf("%d ���� ��� ���ʿ� ���Ե� �� ��� %d\n", newNode->value, insertedNode->value);

    return 0;
}
