#include <stdio.h>
#include <stdlib.h>

int main(){
	int n = 10;
	int *arr;

	arr = (int *)malloc(n * sizeof(int));
	printf("\n");

	if(arr == NULL){
		printf("Memory allocation failed!\n");
        	return 1;
	}

	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);
	}

	int new_n = 5;
        int *new_arr = (int *)realloc(arr, new_n * sizeof(int));

	if (new_arr == NULL) {
        	printf("Memory reallocation failed!\n");
        	free(arr);
        	return 1;
    	}
	
	printf("Array after resizing: ");
    	for (int i = 0; i < new_n; i++) {
        	printf("%d ", arr[i]);
    	}
	printf("\n");

	free(new_arr);
	return 0;
}
