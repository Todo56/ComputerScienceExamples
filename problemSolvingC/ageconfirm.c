#include <stdio.h>

void main(){
	int age;
	printf("Input your age\n");
	scanf("%i", &age);
	if(age >= 18){
		printf("Elegible\n");
	} else {
		printf("Inelegible\n");
	}
}
