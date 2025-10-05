#include <stdio.h>
#include <stdlib.h>

int  main(){
        int max_n = 50;
        int n = 3;
        char **arr = (char **)malloc(n * sizeof(char *));
        if(arr == NULL){
                printf("Memory allocation failed!\n");
                return 1;
        }

        for ( int i = 0; i < n; i++){
                arr[i] = (char *)malloc(max_n * sizeof(char));

                if (arr[i] == NULL) {
                        printf("Memory allocation failed!\n");
                        for (int k = 0; k < i; k++)
                                free(arr[k]);
                        free(arr);
                        return 1;
                }
        }

        printf("Enter 3 strings: ");
        for (int i = 0; i < n; i++) {
                scanf("%50s", arr[i]);
        }

        for (int i = 0; i < n; i++) {
                printf("%s ", arr[i]);
        }
        printf("\n");

        int new_n = n + 2;

        char **new_arr = (char **)realloc(arr,(new_n) * sizeof(char *));
        if (new_arr == NULL) {
                printf("Memory reallocation failed!\n");
                for (int k = 0; k < n; k++)
                        free(arr[k]);
                free(arr);
                return 1;
        }
	
	for (int i = n; i < new_n; i++){
		new_arr[i] = (char *)malloc(max_n * sizeof(char));
		if (new_arr[i] == NULL) {
            		printf("Memory allocation failed!\n");
            		for (int k = 0; k < i; k++)
                		free(new_arr[k]);
            		free(new_arr);
            		return 1;
        	}
	}

        printf("Enter 2 more strings: ");
        for (int i = n; i < new_n; i++) {
                scanf("%50s", new_arr[i]);
        }

        printf("All strings: ");
        for (int i = 0; i < new_n; i++) {
                printf("%s ", new_arr[i]);
        }
        printf("\n");

        for (int i = 0; i < new_n; i++) {
                free(new_arr[i]);
        }
        free(new_arr);

        return 0;
}
