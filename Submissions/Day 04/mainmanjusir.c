#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct node {
	int data;
	struct node* next;
};

struct node* createnode(int data){
	struct node *temp=(struct node*)malloc(sizeof(struct node));
	temp->data=data;
	return temp;
}

struct node* addtotail(struct node **tailref,int data){
	struct node *newnode;
	struct node *temp;
	
	createnode(data);
	
}


int main(int argc, char *argv[]) {
	int i;
	
	struct node *head;
	struct node *tail;
	struct node *temp;
	
	head=createnode(25);
	printf("%d",head->data);
	//for(i=0;i<num;i++){
		
	
	
	return 0;
}
