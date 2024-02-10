#ifndef HEADER_H
#define HEADER_H

typedef struct Node {
int data;
struct Node* next;
} Node;

Node* createNode(int data);
void insertAtBeginning(Node** headRef, int data);
void insertAtEnd(Node** headRef, int data);
void deleteNode(Node** headRef, int data);
void printLinkedList(Node* head);

#endif
