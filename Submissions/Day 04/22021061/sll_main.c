#include "singly_linked_list.h"
#include <stdio.h>

int main() {
	int i;
    Node* head = NULL;
    int n, data, searchValue;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the elements:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", &data);
        insertAtEnd(&head, data);
    }

    printf("Linked List: ");
    printLinkedList(head);

    printf("Enter the value to search: ");
    scanf("%d", &searchValue);
    int position = searchNode(head, searchValue);

    if (position != -1) {
        printf("Element found at position %d.\n", position);
    } else {
        printf("Element not found.\n");
    }

    while (head != NULL) {
        Node* temp = head;
        head = head->next;
        free(temp);
    }

    return 0;
}

