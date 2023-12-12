#include <stdio.h>
#include <stdlib.h>

int main() {
int n,m;

printf("Enter number of elements : ");
scanf("%d", &n);

char *array  = (char *) malloc(n * sizeof(char));

//if a blank is eneterd
if (array == NULL) {
	printf("Error!\n");
	return 1;
}

for (int i = 0; i < n; i++) {
	array[i] = 'a' + i;
}
int new=2*n;
array  = (char *) realloc(array,new * sizeof(char));
printf("The array: ");

for (int i = n; i < new; i++) {
	array[i] = 'A' + (i-n);
}

for (int i = 0; i < new; i++) {
printf("%c ", array[i]);
}
printf("\n");

printf("Enter number of elements for double array: ");
scanf("%d", &m);

double *darray  = (double*)malloc(m * sizeof(double));

if(darray == NULL) {
	printf("Error!\n");
	return 1;
}
printf("Enter double values with single space: ");

for (int i = 0; i < m; i++) {
scanf("%lf", darray[i]);
printf("%lf ", darray[i]);
}
printf("\n");

free(array);
free(darray);

return 0;
}
