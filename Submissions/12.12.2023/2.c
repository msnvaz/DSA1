#include<stdio.h>
#include<stdlib.h>

struct Student{
	char name[20];
	int marks;
};


int main(){
	int n, add, i;
	char *a, choise;
	
	struct Student *stptr = calloc(n, sizeof(struct Student));
	
	printf("Enter Number of Students : ");
	scanf("%d", &n);
	
	for(i = 0; i<n; i++){
		printf("Enter Details for Student %d:\n", i+1);
		printf("Name: ");
		scanf("%s", &((stptr+i)->name));
		printf("Marks: ");
		scanf("%d", &((stptr+i)->marks));
	}
	
	printf("Entered Details for %d Students:\n", n);
	
	for(i = 0; i<n; i++){
		printf("Student %d - Name: %s, ",i+1, (stptr+i)->name);
		printf("Marks: %d\n", (stptr+i)->marks);
	}
	
	printf("Do you want to add more students (y/n) :");
	scanf("%*c%c", &choise);
	
	if(choise != 'y'){
		free(stptr);
		return 0;
	}
	
	printf("Enter the number of additional students: ");
	scanf("%d", &add);
	
	realloc(stptr, n + add);
	
	for(i = n; i<n+add; i++){
		printf("Enter Details for Additional Student %d:\n", i+1);
		printf("Enter Name: ");
		scanf("%s", &((stptr+i)->name));
		printf("Enter Marks: ");
		scanf("%d", &((stptr+i)->marks));
	}
	
	printf("Details after adding %d more student(s)\n", add);
	
	for(i = 0; i<n+add; i++){
		printf("Student %d - Name: %s, ",i+1, (stptr+i)->name);
		printf("Marks: %d\n", (stptr+i)->marks);
	}
	
	
	
}
