#ifndef HEADER_H
#define HEADER_H

typedef struct Node {
int data;
struct Node* next;
};

struct Node* createNode(int data);
void insertAtBeginning(struct Node** headRef, int data);
void insertAtEnd(struct Node** headRef, int data);
void deleteNode(struct Node** headRef, int data);
void printLinkedList(struct Node* head);

#endif
