#include <stdio.h>
#include <stdlib.h>
#include "header.h"

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	struct node *head=NULL;
	head=(struct node *)malloc(sizeof(struct node));
	head->data = 45; 
	
	struct node *temp;
		temp=(struct node *)malloc(sizeof(struct node));
		head->next = temp; 


	temp->	data= 86;
	
	
	
	
	/*int i,array[5] = {1,2,3,4,5};
	for (i=0;i<5;i++){
		printf("%d\n",array[i]);
	}
	for (i=0;i<5;i++){
		
	}*/	
	
	printf("%d\n",head->data);
	printf("%d\n",temp->data);
	printf("%d\n",head->next);
	printf("%d\n",temp);	
	return 0;
	
}
