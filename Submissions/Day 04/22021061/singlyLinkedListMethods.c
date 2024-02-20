#include "singly_linked_list.h"
#include <stdio.h>
#include <stdlib.h>

Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void insertAtBeginning(Node** headRef, int data) {
    Node* newNode = createNode(data);
    newNode->next = *headRef;
    *headRef = newNode;
}

void insertAtEnd(Node** headRef, int data) {
    Node* newNode = createNode(data);
    if (*headRef == NULL) {
        *headRef = newNode;
        return;
    }

    Node* current = *headRef;
    while (current->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
}

void deleteNode(Node** headRef, int data) {
    Node* current = *headRef;
    Node* prev = NULL;

    while (current != NULL && current->data != data) {
        prev = current;
        current = current->next;
    }

    if (current == NULL) {
        printf("Node with data %d not found.\n", data);
        return;
    }

    if (prev == NULL) {
        *headRef = current->next;
    } else {
        prev->next = current->next;
    }

    free(current);
}

void printLinkedList(Node* head) {
    while (head != NULL) {
        printf("%d ", head->data);
        head = head->next;
    }
    printf("\n");
}

int searchNode(Node* head, int data) {
    int position = 0;

    while (head != NULL) {
        if (head->data == data) {
            return position;
        }
        head = head->next;
        position++;
    }

    return -1;
}

