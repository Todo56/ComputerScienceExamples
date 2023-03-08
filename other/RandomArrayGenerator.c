#include<stdio.h>  
#include<stdlib.h>  

void main(){
	int n;
	int i;
	int *array;
	printf("Input how many random numbers you want generated:");
	scanf("%i", &n);
	array = (int*)malloc(n * sizeof(int));
	for(i = 0;i < n; i++){
		array[i] = (int)random();
	}

	for(i = 0; i < n; i++){
		printf("index %i: %i\n", i, array[i]);
	}

	free(array);
}
