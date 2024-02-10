#include <stdio.h>
#include <stdlib.h>
#include "header.h"

Node* createNode(int data){
	struct Node *head;
	head->data=data;
	head->next=NULL;
};

void insertAtBeginning(Node** headRef, int data);
void insertAtEnd(Node** headRef, int data);
void deleteNode(Node** headRef, int data);
void printLinkedList(Node* head);

