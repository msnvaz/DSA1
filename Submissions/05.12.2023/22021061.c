/*#include <stdio.h>
#include <stdlib.h>

struct node{
	int data;
	struct node *next;
}*head=NULL;

main(){
	int n;
	printf("Enter the number of nodes : ");
	scanf("%d",n);
	
	}
	
void createll(int n){
	
	
}*/
#include <stdio.h>
#include <stdlib.h>


struct Node {
    int data;
    struct Node* next;
};

struct Node* createNode(int data) {
    struct Node* newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

void DisplayList(struct Node* head) {
    struct Node* temp = head;

    printf("Data entered in the list:\n");
    while (temp != NULL) {
        printf("Data = %d\n", temp->data);
        temp = temp->next;
    }
}

int main() {
    int numNodes, data;
    printf("Input the number of nodes: ");
    scanf("%d", &numNodes);

    if (numNodes <= 0) {
        printf("Number of nodes should be greater than 0.\n");
        return 1;
    }

    struct Node* head = NULL;
    struct Node* temp = NULL;
int i;
    for ( i = 0; i < numNodes; i++) {
        printf("Input data for node %d: ", i + 1);
        scanf("%d", &data);

        if (head == NULL) {
            head = createNode(data);
            temp = head;
        } else {
            temp->next = createNode(data);
            temp = temp->next;
        }
    }

    displayList(head);

    return 0;
}
