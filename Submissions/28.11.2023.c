#include <stdio.h>

int main(){
	int array[3]={3,13,2002};
	int i,sizeinbytes,sizeoffirst;
	sizeinbytes=sizeof(array);
	
	printf("Size in bytes = %d\n",sizeinbytes);
	
	printf("Size of first element = %d\n",sizeof(array[0]));
	
	printf("Number of elements = %d\n",sizeinbytes/sizeof(array[0]));
	
	for(i=0;i<=2;i++){
		printf("Element %d = %d\n",i+1,array[i]);
	}
	
	for(i=0;i<=2;i++){
		printf("Size of element %d = %d\n",i+1,sizeof(array[i]));
	}
}
