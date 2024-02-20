#ifndef SINGLY_LINKED_LIST_H
#define SINGLY_LINKED_LIST_H

typedef struct Node {
    int data;
    struct Node* next;
} Node;

Node* createNode(int data);
void insertAtBeginning(Node** headRef, int data);
void insertAtEnd(Node** headRef, int data);
void deleteNode(Node** headRef, int data);
void printLinkedList(Node* head);
int searchNode(Node* head, int data);

#endif

