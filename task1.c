#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	int *arr;

	printf("Enter the number of elements: ");
	scanf("%d", &n);
 
	arr = (int *)malloc(n * sizeof(int));
	printf("\n");

	if(arr == NULL){
		printf("Memory allocation failed!\n");
        	return 1;
	}

	int sum = 0;
	for (int i = 0; i < n; i++) {
		printf("arr[%d] = ", i);
		scanf("%d", &arr[i]);

		sum += arr[i];
	}

	printf("Sum of the array: %d\n", sum);

    	free(arr);
	arr = NULL;
    	return 0;
}
