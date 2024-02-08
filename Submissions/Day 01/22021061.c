#include <stdio.h>

int main(){
	
    // (01)1. Create  array 
    int array[3] = {5, 6, 7};
    int i;
    
    // 2. Print properties of the array
    printf("Size of array (in Bytes): %d\n", sizeof(array));
    printf("Size of the first element: %d\n", sizeof(array[0]));
    printf("Number of Elements in Array: %d\n", sizeof(array) / sizeof(array[0]));

    // 4. Print all elements of the array
    printf("All elements of array: ");
    for ( i = 0; i < sizeof(array) / sizeof(array[0]); i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // 5. Print size of each element
    printf("Size of each element: %d\n", sizeof(array[0]));

    // 02) Get pointer vades of the array and first element
    int *arrayPtr = array;
    int *firstElementPtr = &array[0];

    printf("\nPointer vades:\n");
    printf("Pointer to array: %p\n", (void *)arrayPtr);
    printf("Pointer to first element: %p\n", (void *)firstElementPtr);

	//pointer vades are equal
	
	//03)Even though the vade of the pointer change they are directing to the same address
	
	//04) pointer vade of each address
	
	printf("\nPointer values for each element:\n");
    for ( i = 0; i < sizeof(array) / sizeof(array[0]); i++)
        printf("Element %d: %p\n", i, &array[i]);
        
    //05)DIfference between adresses
    
    printf("\nDifference between addresses of consecutive elements:\n");
    for ( i = 0; i < sizeof(array) / sizeof(array[0]); i++){
        printf("Element %d to Element %d: %d Byte(s)\n", i, i + 1,(&array[i + 1] - &array[i]));
    }
	
}	//06)

int *Base_value = &array[0];
