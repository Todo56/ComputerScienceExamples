#include<stdio.h>

void main(){
	int num;
	printf("Enter a number:\n");
	scanf("%i", &num);
	if(num >= 0){
		printf("Your number is positive\n");
	} else {
		printf("Your number is negative\n");
	}

}
