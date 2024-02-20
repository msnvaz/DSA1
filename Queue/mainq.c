#include <stdio.h>
#include <stdlib.h>
#define N 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int queue[N];
int front = -1;
int rear = -1;

void enqueue(int x);


int main(int argc, char *argv[]) {
	return 0;
}

void enqueue(int x){
	if(rear==N-1){
		printf("Overflow");
	}
	else if(front==-1 && rear ==-1){
		front=rear=0;
		queue[rear]=x;
	}
	else{
		rear++;
		queue[rear]=x;
	}
}
