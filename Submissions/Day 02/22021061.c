#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct Node{
	int data;
	struct Node *next;
};

void createnode(){
	
}

int main(int argc, char *argv[]) {
	int i;
	struct Node *n1,*n2,*n3,*n4,*temp;
		
	n1=(struct Node*)malloc(sizeof(struct Node));
	n1->data=10;
	
	temp=n1;
	
	
	n2=(struct Node*)malloc(sizeof(struct Node));
	n2->data=20;
	n1->next=n2;
		
	n3=(struct Node*)malloc(sizeof(struct Node));
	n3->data=30;
	n2->next=n3;
		
	n4=(struct Node*)malloc(sizeof(struct Node));
	n4->data=40;
	n3->next=n4;
	
	n4->next=NULL;
	
	for(i=0;i<4;i++){
		printf("%d\n",temp->data);
		temp=temp->next;
	}
	
	addtohead(5);
	return 0;

}
    
//02) function to add to head

void addtohead(int n,strcut Node* headref){
	struct Node *new;
	new=(struct Node*)malloc(sizeof(struct Node));
	new->next=headref;
	temp=new;
	new->data=n;
}
