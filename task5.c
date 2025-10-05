#include <stdio.h>
#include <stdlib.h>

int main(){
	int n;
	printf("Enter the number of students: ");
	scanf("%d", &n);

	int *grades = (int *)malloc(n * sizeof(int));
	if(grades == NULL){
		printf("Memory allocation failed!\n");
        	return 1;
	}

	printf("Enter the grades: ");
	for (int i = 0; i < n; i++) {
		scanf("%d", &grades[i]);
	}

	int max_grade = 0;
	int min_grade = grades[0];

	for (int i = 0; i < n; i++) {
		if (grades[i] < min_grade)
			min_grade = grades[i];
		if (grades[i] > max_grade)
			max_grade = grades[i];
	}	

    	printf("Highest grade: %d\n", max_grade);
    	printf("Lowest grade: %d\n", min_grade);
	
	free(grades);
	return 0;
}
