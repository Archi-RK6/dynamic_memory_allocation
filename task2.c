#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *arr;

	printf("Enter the number of elements: ");
	scanf("%d", &n);	
	
	arr = (int*)calloc(n, sizeof(int));

	if(arr == NULL){
		printf("Memory allocation failed!\n");
        	return 1;
	}
	
	printf("Array after calloc:\n");
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = %d\n", i, arr[i]);
	}
	printf("\n");

	int sum = 0;
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);

		sum += arr[i];
	}
	double average = (double)sum / (double)n;

	printf("Updated array:\n");
    	for (int i = 0; i < n; i++) {
                printf("arr[%d] = %d\n", i, arr[i]);
        }

	printf("Average of the array: %.2f\n", average);

    	free(arr);
    	arr = NULL;
	return 0;
}
