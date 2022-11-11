#include <stdio.h>

int main(){
	int upTo, i, cube;
	printf("Input a number:\n");
	scanf("%i", &upTo);
	for(i = 0; i < upTo; i++){
		printf("%i\n", i);
	}
	
	printf("------------\n");

	for(i = 0; i < upTo; i++){
		cube = i * i * i;
		printf("%i\n", cube);
	}
}
