#include <stdio.h>
#include <stdlib.h>
#include "header.h"
struct Node* createNode(int data){
	struct Node* newnode = (struct Node*)malloc(sizeof(struct Node));
	newnode->data=data;
	newnode->next=NULL;
	return *newnode;
};

void insertAtBeginning(struct Node** headRef, int data){
	struct Node* newnode =(struct Node*)malloc(sizeof(struct Node)) ;
	
}

void insertAtEnd(struct Node** headRef, int data);
void deleteNode(struct Node** headRef, int data);
void printLinkedList(struct Node* head);

